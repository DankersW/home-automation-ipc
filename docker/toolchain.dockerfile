FROM golang:1.16

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    protobuf-compiler \
    golang-google-grpc-dev \ 
    golang-goprotobuf-dev
