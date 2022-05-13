#!/bin/bash

mkdir -p generated/go
mkdir -p generated/c
mkdir -p generated/nanopb

for file in "pb_common.c" "pb_common.h" "pb_decode.c" "pb_decode.h" "pb_encode.c" "pb_encode.h" "pb.h"; do
    cp nanopb/$file generated/nanopb
done

proto_files=("wsn.proto" "system.proto")
for proto_file in ${proto_files[*]}; do
    echo "Generating proto file: $proto_file"
    ./scripts/docker_run.sh --c_out=generated/c --go_out=generated/go -I. $proto_file
    nanopb/generator/protoc --nanopb_out=generated/nanopb $proto_file
done
