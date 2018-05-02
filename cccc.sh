#!/usr/bin/env bash

set -e

: ${HOST_UID:?"HOST_UID has to be set"}

fix_permissions() {
    rv=$?
    chown -R ${HOST_UID} /app/repo
    exit ${rv}
}
trap fix_permissions INT TERM EXIT

cd /app/repo

find . | cccc --lang=c++ -