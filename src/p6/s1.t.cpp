#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP6S1Tests, RotateArraySuccess)
{
    std::vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8};
    S1 s1;
    s1.rotate(nums, 3);
    ASSERT_THAT(nums, ElementsAre(6, 7, 8, 1, 2, 3, 4, 5));
}