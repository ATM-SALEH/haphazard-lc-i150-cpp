#include <s1.h>

int S1::hIndex(const std::vector<int>& citations) const
{
    std::size_t ccount{citations.size()};
    std::vector<int> buffer(ccount + 1, 0);
    for (const auto citation: citations)
    {
        if (citation >= ccount)
        {
            buffer[ccount]++;
        }
        else
        {
            buffer[citation]++;
        }
    }
    for (int count = 0, i = buffer.size() - 1; i >= 0; i--)
    {
        if (count += buffer.at(i); count >= i)
        {
            return i;
        }
    }
    return 0;
}