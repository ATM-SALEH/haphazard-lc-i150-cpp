#include <s1.h>

bool S1::canJump(
    const std::vector<int>& nums,
    std::size_t start,
    std::size_t end) const
{
    for (std::size_t reach = 0; start < end && start <= reach; start++)
    {
        reach = std::max(reach, start + nums.at(start));
    }
    return start == end;
}

bool S1::canJump(const std::vector<int>& nums) const
{
    return canJump(nums, 0, nums.size());
}