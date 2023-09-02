#include <s1.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;

// TODO: make these tests parametrized
// TODO: add more tests
TEST(LC150IP1S1Tests, FirstContainerSortedAfterMerge)
{
    // GIVEN
    S1 s1;
    std::vector<int> nums1{1, 2, 3, 0, 0, 0};
    const int m = 3;
    std::vector<int> nums2{2, 5, 6};
    const int n = 3;
    s1.merge(nums1, m, nums2, n);
    ASSERT_THAT(nums1, ElementsAre(1, 2, 2, 3, 5, 6));
}