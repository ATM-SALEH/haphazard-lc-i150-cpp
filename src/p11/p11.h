#include <vector>

class P11
{
public:
    ~P11() = default;
    virtual int hIndex(const std::vector<int>& citations) const = 0;
};