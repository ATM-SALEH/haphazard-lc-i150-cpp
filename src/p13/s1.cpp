#include <s1.h>

std::vector<int> S1::productExceptSelf(
    const std::vector<int>& nums) const
{
    std::size_t n{nums.size()};
    std::vector<int> result(n, 1);
    for (int product = 1, i = 0; i < n; i++)
    {
        result[i] = product;
        product *= nums.at(i);
    }
    for (int product = 1, i = n - 1; i >= 0; i--)
    {
        result[i] *= product;
        product *= nums.at(i);
    }
    return result;
}