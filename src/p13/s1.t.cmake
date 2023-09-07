add_executable(lc150ip13s1_utest s1.t.cpp)
target_link_libraries(lc150ip13s1_utest
    PRIVATE 
        lc150ip13s1
        GTest::gtest_main
        GTest::gmock)

include(GoogleTest)
gtest_discover_tests(lc150ip13s1_utest)