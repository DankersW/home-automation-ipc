#!/bin/bash

BASE_DIR=$(readlink -f $(dirname $0)/..)
IMAGE_NAME="home_automation_ipc_toolchain"
IMAGE_TAG="latest"

fail() {
    echo "##### FAIL: $1"
    exit 1
}

docker run \
    --rm \
	--user $UID:$UID \
	--volume ${BASE_DIR}:/work \
    -e XDG_CACHE_HOME=/tmp/.cache \
	-it --privileged \
    ${IMAGE_NAME}:${IMAGE_TAG} $@ \
        || fail "running docker, better luck next time"
