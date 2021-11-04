#!/bin/bash

DOCKER_IMAGE="home_automation_ipc_toolchain"
TOOLCHAIN_TAG="latest"

echo "Building toolchain docker"
docker build --tag $DOCKER_IMAGE:$TOOLCHAIN_TAG -f docker/toolchain.dockerfile . || exit 1

echo "Your toolchain is configured and ready to Golang :)"