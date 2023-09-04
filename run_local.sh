mkdir -p build
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -B build -S .
pushd build && make && ctest && popd