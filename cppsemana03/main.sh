#!/bin/bash

g++ trapintegrator.cpp -c -o trapintegrator.o -std=c++11 && \
g++ test.cpp -c -o test.o -std=c++11 && \
g++ trapintegrator.o test.o -o test.x && clear && ./test.x 
