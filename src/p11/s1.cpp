#include <s1.h>

namespace
{
    std::size_t getBucketIndex(std::size_t idx, std::size_t last)
    {
        return idx >= last ? last : idx;
    }

    std::size_t getHIndexFromBuckets(const std::vector<int>& buckets)
    {
        for (int count = 0, i = buckets.size() - 1; i >= 0; i--)
        {
            if (count += buckets.at(i); count >= i)
            {
                return i;
            }
        }
        return 0;
    }
}

int S1::hIndex(const std::vector<int>& citations) const
{
    std::size_t ccount{citations.size()};
    std::vector<int> buckets(ccount + 1, 0);
    for (const auto citation: citations)
    {
        buckets[getBucketIndex(citation, ccount)]++;
    }
    return getHIndexFromBuckets(buckets);
}