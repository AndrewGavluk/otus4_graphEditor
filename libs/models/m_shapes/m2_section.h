#include "../m_multyline.h"

class Section : public multyline
{
    public:
        Section(std::initializer_list<double> &points) : multyline(points) {}
};