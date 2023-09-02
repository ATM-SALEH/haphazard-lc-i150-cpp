#include <p6.h>

class S1 : public P6
{
private:
    template<typename It>
    void rotateInternal(It begin, It end, size_t k) const;
public:
    virtual void rotate(std::vector<int>& nums, int k) const;
};