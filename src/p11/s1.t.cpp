#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP11S1Tests, HIndexFound)
{
    std::vector<int> nums{3, 0, 8, 7, 5};
    S1 s1;
    ASSERT_EQ(s1.hIndex(nums), 3);
}