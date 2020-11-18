#include <vector>

#include "m_point.h"

class multyline {
    
    public:
        multyline(std::initializer_list<double>); //  point coordinates sequence (x1, y1, x2, y2 ...)
        virtual ~multyline();
        inline const point& get(int number);    // without checking out of range

    private:
        std::vector<point> m_points;

};
