#include <s1.h>

template<typename It>
void S1::rotateInternal(It begin, It end, size_t k) const
{
    auto n{std::distance(begin, end)};
    std::reverse(begin, begin + n - k);
    std::reverse(begin + n - k, end);
    std::reverse(begin, end);
}

void S1::rotate(std::vector<int>& nums, int k) const
{
    if (k %= nums.size(); !k)
    {
        return;
    }
    rotateInternal(std::begin(nums), std::end(nums), k);
}