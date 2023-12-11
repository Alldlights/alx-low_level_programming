#!/bin/bash
c_files=$(ls *.c)
gcc -shared -fPIC -o liball.so $c_files
