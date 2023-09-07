Haphazard implementation of leetcode problems curated under [Top Interview 150](https://leetcode.com/studyplan/top-interview-150)

![Unit Tests](https://github.com/ATM-SALEH/haphazard-lc-i150-cpp/actions/workflows/test.yml/badge.svg)

## Compile and run unit tests

You can compile and run the unit test suites after cloning the repository using any of the following methods

### Using local machine environment

```
mkdir -p build
cmake -B build -S .
pushd build && make && ctest && popd
```
Here, the build directory is named as `build`. Feel free to use any other name. Alternatively, there is a companion script in the root directory which wraps these instrcutions. You can use it by running

```
./run_tests.sh
```

### Using containerised environment

Make sure you have [`docker-compose`](https://docs.docker.com/compose/) installed beforehand.

```
docker-compose run --rm utest
```

### Supported Platform(s)

All unix flavors should support the commands specified above. Windows compatibility hasn't been tested. These commands have been tested on a machine with the following specification:

```
Name: Ubuntu 22.04.1 LTS
Kernel: 5.15.0-79-generic
Architecture: x86_64
Processor Model: AMD EPYC 7601 32-Core Processor
RAM Size: 4GB
```

### Solved Problems 

[Click here](https://github.com/ATM-SALEH/haphazard-lc-i150-cpp/tree/main/SOLUTIONS.md)