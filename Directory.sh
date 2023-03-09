#!/bin/bash

if [ -z "$1" ]; then
    echo "No arguments Provided"
    exit 1
fi

if [ -d "$1" ]; then
    echo "directory"
    exit 0
fi

if [ -f "$1" ]; then
    echo "regular file"
    exit 0
fi

echo "Something else"
exit 0
