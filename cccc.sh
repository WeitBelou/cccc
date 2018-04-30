#!/usr/bin/env bash

set -e

INPUT_FILES="$@"

XML_OUTPUT="/app/repo/cccc.xml"

: ${HOST_UID:?"HOST_UID has to be set"}

fix_permissions() {
    rv=$?
    chown -R ${HOST_UID} ${XML_OUTPUT}
    exit ${rv}
}
trap fix_permissions INT TERM EXIT

cccc ${INPUT_FILES} --xml_outfile=${XML_OUTPUT}