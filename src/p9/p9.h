#include <vector>

class P9
{
public:
    ~P9() = default;
    virtual bool canJump(const std::vector<int>& nums) const = 0;
};