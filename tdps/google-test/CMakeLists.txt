# Ref: https://google.github.io/googletest/quickstart-cmake.html

cmake_minimum_required(VERSION 3.20)
project(hphz-skiplist-tests)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.tar.gz
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)