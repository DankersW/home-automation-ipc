#!/bin/bash

docker login

mkdir -p generated/go
mkdir -p generated/c

proto_files=("wsn.proto")

for val1 in ${proto_files[*]}; do
    echo "Generating proto file: $val1"
    ./scripts/docker_run.sh --c_out=generated/c --go_out=generated/go -I. $val1
done
