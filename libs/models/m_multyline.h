#include <vector>

#include "m_point.h"

class Multyline {
    
    public:
        Multyline(std::initializer_list<double>); //  point coordinates sequence (x1, y1, x2, y2 ...)
        virtual ~Multyline();
        inline const point& get(int number) const;    // without checking out of range
        void set(int number, double posX, double posY);
        enum drawMethod{};
    private:
        std::vector<point> m_points;
        
};
