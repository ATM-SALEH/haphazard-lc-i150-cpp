# syntax = docker/dockerfile:1.2

FROM ubuntu:latest

RUN apt-get update -y
RUN apt-get upgrade -y
RUN rm -f /etc/apt/apt.conf.d/docker-clean

# reinstall certificates, otherwise git clone command might result in an error
RUN --mount=type=cache,target=/var/cache/apt apt-get install -y \
    --reinstall ca-certificates

# install developer dependencies
RUN --mount=type=cache,target=/var/cache/apt apt-get install -y \
    git build-essential cmake --no-install-recommends