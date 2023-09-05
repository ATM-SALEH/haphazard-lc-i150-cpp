#include <vector>

class P10
{
public:
    ~P10() = default;
    virtual int jump(const std::vector<int>& nums) const = 0;
};