#include <vector>

class P13
{
public:
    ~P13() = default;
    virtual std::vector<int> productExceptSelf(
        const std::vector<int>& nums) const = 0;
};