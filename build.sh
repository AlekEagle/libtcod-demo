#!/bin/bash

gcc src/*.cpp -Iinclude -L. -ltcod -lstdc++ -o demo -Wl,-rpath=. -Wall
