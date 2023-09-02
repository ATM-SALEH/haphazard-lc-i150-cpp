add_executable(lc150ip6s1_utest s1.t.cpp)
target_link_libraries(lc150ip6s1_utest
    PRIVATE 
        lc150ip6s1
        GTest::gtest_main
        GTest::gmock)

include(GoogleTest)
gtest_discover_tests(lc150ip6s1_utest)