#include "../m_multyline.h"

class Section : public Multyline
{
    public:
        Section(std::initializer_list<double> &points) : Multyline(points) {}
};