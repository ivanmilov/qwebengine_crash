#!/bin/bash

# put full qt path in script in case of error

cmake -B build -DCMAKE_PREFIX_PATH="/Users/$USER/Qt/6.5.2/macos" && \
cmake --build build && \
./build/webpagetest