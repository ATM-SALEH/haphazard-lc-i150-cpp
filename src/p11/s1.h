#include <p11.h>

class S1 : public P11
{
public:
    virtual int hIndex(const std::vector<int>& citations) const;
};