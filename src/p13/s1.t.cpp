#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP13S1Tests, ProductExceptSelfSuccess)
{
    std::vector<int> nums{1, 2, 3, 4};
    S1 s1;
    EXPECT_THAT(s1.productExceptSelf(nums), ElementsAre(24, 12, 8, 6));
}