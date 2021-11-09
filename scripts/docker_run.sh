#!/bin/bash

BASE_DIR=$(readlink -f $(dirname $0)/..)
IMAGE_NAME="znly/protoc"
IMAGE_TAG="0.4.0"

fail() {
    echo "##### FAIL: $1"
    exit 1
}

docker run \
    --rm \
	-v $(pwd):$(pwd) \
    -w $(pwd) \
	-it --privileged \
    ${IMAGE_NAME}:${IMAGE_TAG} $@ \
        || fail "running docker, better luck next time"
