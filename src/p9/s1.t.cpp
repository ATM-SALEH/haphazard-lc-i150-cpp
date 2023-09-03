#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP9S1Tests, JumpToEndPossible)
{
    std::vector<int> nums{2, 3, 1, 1, 4};
    S1 s1;
    ASSERT_EQ(s1.canJump(nums), true);
}

TEST(LC150IP9S1Tests, JumpToEndImpossible)
{
    std::vector<int> nums{3, 2, 1, 0, 4};
    S1 s1;
    ASSERT_EQ(s1.canJump(nums), false);
}