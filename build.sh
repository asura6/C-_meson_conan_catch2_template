#!/bin/bash
set -e
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

BUILD_TYPE="${BUILD_TYPE:-Release}"

conan profile detect 2> /dev/null || true
conan install -of "$SCRIPT_DIR/build" --build=missing --settings=build_type="$BUILD_TYPE" "$SCRIPT_DIR"

meson setup --native-file "$SCRIPT_DIR/build/conan_meson_native.ini" "$SCRIPT_DIR/build" "$SCRIPT_DIR"
meson compile -C "$SCRIPT_DIR/build"
