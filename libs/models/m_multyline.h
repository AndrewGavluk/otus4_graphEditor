#include <vector>

#include "m_point.h"

#pragma once 

class Multyline {
    
    public:
        Multyline(std::initializer_list<double>); //  point coordinates sequence (x1, y1, x2, y2 ...)
        virtual ~Multyline();
        inline const Point& get(int number) const;    // without checking out of range
        void set(int number, double posX, double posY);
        enum drawMethod{};
    private:
        std::vector<Point> m_points;
        
};
