#!/usr/bin/env bash

set -e

IMAGE="strangeducttape/cccc"

docker build -t ${IMAGE} .

docker push ${IMAGE}