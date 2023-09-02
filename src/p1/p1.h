#include <vector>

class P1
{
public:
    ~P1() = default;
    virtual void merge(
        std::vector<int>& nums1,
        int m,
        std::vector<int>& nums2,
        int n) const = 0;
};