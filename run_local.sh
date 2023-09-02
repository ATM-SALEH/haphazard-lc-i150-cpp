mkdir -p build
cmake -B build -S .
pushd build && make && ctest && popd