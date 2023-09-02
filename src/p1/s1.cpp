#include <s1.h>

std::pair<int, int> S1::mergeUptoFirstIfShorter(
    std::vector<int>& nums1,
    int m,
    const std::vector<int>& nums2,
    int n) const
{
    int c = m + n - 1;
    int c1 = m - 1;
    int c2 = n - 1;
    while (c1 >= 0 && c2 >= 0)
    {
        if (nums1.at(c1) > nums2.at(c2))
        {
            nums1[c--] = nums1.at(c1--);
        }
        else
        {
            nums1[c--] = nums2.at(c2--);
        }
    }
    return std::make_pair(c, c2);
}

void S1::mergeRemainingFromSecond(
    std::vector<int>& destination, 
    int dc, 
    const std::vector<int>& remaining,
    int rc) const
{
    while (rc >= 0)
    {
        destination[dc--] = remaining.at(rc--);
    }
}

void S1::merge(
    std::vector<int>& nums1,
    int m,
    std::vector<int>& nums2,
    int n) const
{
    // TODO: implement using std::merge and std::copy_backward
    auto pos = mergeUptoFirstIfShorter(nums1, m, nums2, n);
    mergeRemainingFromSecond(nums1, pos.first, nums2, pos.second);
}