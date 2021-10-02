#!/bin/bash
set -e # Quit script on error

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "${SCRIPT_DIR}"

"${SCRIPT_DIR}/mac-prebuild.sh"
cd "${SCRIPT_DIR}"
"${SCRIPT_DIR}/mac-config.sh"

cd "${SCRIPT_DIR}"
cd build
cmake --build . --config Release

cd "${SCRIPT_DIR}"
