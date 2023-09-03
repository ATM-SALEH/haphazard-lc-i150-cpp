#include <p9.h>

class S1 : public P9
{
private:
    bool canJump(
        const std::vector<int>& nums,
        std::size_t start,
        std::size_t end) const;
public:
    virtual bool canJump(const std::vector<int>& nums) const;
};