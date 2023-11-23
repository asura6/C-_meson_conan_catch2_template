#!/bin/bash
set -e
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

BUILD_TYPE=Release "$SCRIPT_DIR/build.sh"
meson install -C "$SCRIPT_DIR/build" --tags runtime --destdir="$SCRIPT_DIR/test_install"