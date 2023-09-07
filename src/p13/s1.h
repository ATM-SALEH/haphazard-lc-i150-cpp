#include <p13.h>

class S1 : public P13
{
public:
    virtual std::vector<int> productExceptSelf(
        const std::vector<int>& nums) const;
};