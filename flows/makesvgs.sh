#!/bin/bash

for i in flows/*.dot; do dot -Tsvg "$i" >"$(dirname "$i")/$(basename "$i" .dot).svg"; done
