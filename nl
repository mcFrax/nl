#!/usr/bin/python2

import os, tempfile, shutil, subprocess, sys

nldir = os.path.dirname(sys.argv[0])
sources = sys.argv[1:]  # files or directories
try:
    ooptindex = sources.index('-o')
    ofile = sources[ooptindex+1]
    sources = sources[:ooptindex] + sources[ooptindex+2:]
except ValueError:
    ofile = None
if not sources:
    raise Exception("No sources")

mainmodule = "main"
if len(sources) == 1 and os.path.isfile(sources[0]):
    mainmodule = os.path.basename(sources[0])
    if mainmodule.endswith('.nl'):
        mainmodule = mainmodule[:-3]

if ofile is None:
    ofile = mainmodule

mk_cache = os.path.join(nldir, 'mk_cache.exe')
nianio_lib = os.path.join(nldir, 'nianio_lib')
native = os.path.join(nldir, 'native_lib_c')
math = os.path.join(nldir, 'math_fun.gr')
cache_dir = tempfile.mkdtemp(prefix='nl_tmp')
cmain = os.path.join(cache_dir, 'nlmain.c')

with open(cmain, 'w') as fmain:
    fmain.write(
"""#include <stdio.h>
#include "{0}.h"
#include "c_rt_lib.h"

int main(int argc, char **argv) {{
    c_rt_lib0init();
    ImmT args = c_rt_lib0array_new();
    for (int i = 0; i < argc; ++i) {{
        ImmT el = c_rt_lib0string_new(argv[i]);
        c_rt_lib0array_push(&args, el);
        c_rt_lib0clear(&el);
    }}
    ImmT imexitcode = {1}0main(args);
    int exitcode = getIntFromImm(imexitcode);
    c_rt_lib0clear(&imexitcode);
    c_rt_lib0clear(&args);
    c_rt_lib0finish();
    return exitcode;
}}
""".format(mainmodule, mainmodule.replace('0', '00')))

subprocess.check_call([mk_cache, nianio_lib] + sources + ['--o', cache_dir, '--math', math, '--c', '--strict', '--O2'])

def collect_c_files(path):
    return [os.path.join(root, fname)
            for root, dirs, fnames in os.walk(path)
            for fname in fnames
            if fname.endswith('.c')]

csources = collect_c_files(native) + collect_c_files(cache_dir)

subprocess.check_call(['gcc', '-std=c99', '-O0', '-ggdb', '-o', ofile, '-I'+native, '-I'+cache_dir] + csources + ['-lm'])

shutil.rmtree(cache_dir)
