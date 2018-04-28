#!/usr/bin/env bash

set -e

XML_OUTPUT="/app/repo/cccc.xml"

: ${FILENAME:?"FILENAME has to be set"}
: ${HOST_UID:?"HOST_UID has to be set"}

fix_permissions() {
    rv=$?
    chown -R ${HOST_UID} ${XML_OUTPUT}
    exit ${rv}
}
trap fix_permissions INT TERM EXIT

cccc ${FILENAME} --xml_outfile=${XML_OUTPUT}