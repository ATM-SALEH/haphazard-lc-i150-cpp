Haphazard implementation of leetcode problems curated under [Top Interview 150](https://leetcode.com/studyplan/top-interview-150)

## Compile and run unit tests

You can compile and run the unit test suites after cloning the repository using any of the following methods

### Using local machine environment (tested for `unix`)

```
mkdir -p cmake-build // or any other name for build directory
cmake -B cmake-build -S .
pushd cmake-build && make && ctest && popd
```

### Using containerised environment

```
docker-compose run --rm utest
```

### Solved Problems 

| Problem Title | Problem Statement | Solution(s) | 
| ------------- | ----------------- | ----------- |
| Merge Sorted Array       | [Link](https://leetcode.com/problems/merge-sorted-array/?envType=study-plan-v2&envId=top-interview-150) | [Link](https://github.com/ATM-SALEH/haphazard-lc-i150-cpp/tree/main/src/p1) |