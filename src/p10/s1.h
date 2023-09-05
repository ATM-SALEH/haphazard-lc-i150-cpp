#include <p10.h>

class S1 : public P10
{
private:
    int jump(
        const std::vector<int>& nums,
        std::size_t start,
        std::size_t end) const;
public:
    virtual int jump(const std::vector<int>& nums) const;
};