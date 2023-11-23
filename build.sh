#!/bin/bash
set -e
BUILD_TYPE="${BUILD_TYPE:-Release}"

conan profile detect 2> /dev/null || true
conan install -of build --output-folder=build --build=missing --settings=build_type="$BUILD_TYPE" .

meson setup --native-file build/conan_meson_native.ini build
meson compile -C build
