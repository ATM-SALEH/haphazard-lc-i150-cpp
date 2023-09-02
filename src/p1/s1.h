#include <p1.h>

class S1 : public P1
{
private:
    std::pair<int, int> mergeUptoFirstIfShorter(
        std::vector<int>& nums1,
        int m,
        const std::vector<int>& nums2,
        int n) const;
    void mergeRemainingFromSecond(
        std::vector<int>& destination, 
        int dc, 
        const std::vector<int>& remaining,
        int rc) const;
public:
    virtual void merge(
        std::vector<int>& nums1,
        int m,
        std::vector<int>& nums2,
        int n) const;
};