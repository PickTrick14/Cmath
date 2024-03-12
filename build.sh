#!/bin/bash

if [ $1 == 1 ]; then
    echo "Building library"
    echo
    echo
    make math.a
fi
if [ $1 == 2 ]; then
    echo "Building executable tests"
    echo
    echo
    make test
fi
if [ $1 == 3 ]; then
    echo "Building gcov_report"
    echo
    echo
    make gcov_report
fi