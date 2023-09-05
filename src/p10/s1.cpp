#include <s1.h>

int S1::jump(
    const std::vector<int>& nums,
    std::size_t start,
    std::size_t end) const
{
    int jumpCount = 0;
    for (std::size_t reach = 0, rear = 0, i = start; i < end - 1; i++)
    {
        reach = std::max(reach, i + nums.at(i));
        if (i == rear)
        {
            jumpCount++;
            rear = reach;
        }
    }
    return jumpCount;
}

int S1::jump(const std::vector<int>& nums) const
{
    return jump(nums, 0, nums.size());
}