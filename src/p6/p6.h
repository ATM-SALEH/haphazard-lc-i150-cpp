#include <vector>

class P6
{
public:
    ~P6() = default;
    virtual void rotate(std::vector<int>& nums, int k) const = 0;
};