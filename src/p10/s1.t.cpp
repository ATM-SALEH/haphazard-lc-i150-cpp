#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP10S1Tests, ReachToEndWithTwoJumps)
{
    std::vector<int> nums{2, 3, 1, 1, 4};
    S1 s1;
    ASSERT_EQ(s1.jump(nums), 2);
}