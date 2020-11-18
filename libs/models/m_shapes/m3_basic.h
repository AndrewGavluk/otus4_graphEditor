#include "../m_multyline.h"

class Triangle : public multyline
{
    public:
        Triangle(std::initializer_list<double> &points) : multyline(points) {}
        
};

// versatile ()

class VersatileTriangle: public Triangle{ 
    
    enum calcMethod{
        point1, // coord of 1 point, size of 2 lines and angel between them
        point2, // coord of 2 point and 2 angels between them
        point3 // coord of 3 point
    };

    VersatileTriangle(calcMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};

// isosceles ()

class IsoscelesTriangle: public Triangle{ 
    
    enum calcMethod{
        point1side, // coord of 1 point, size of side and angel between side and base of triangel
        point1base, // coord of 1 point, size of base and angel between sides of triangel
        point2side, // coord of 2 points, side ends and and angel between sides of triangel
        point2base, // coord of 2 points, base ends and and angel between side and base of triangel
        point3, // coord of 3 point

        midBase // coord of 1 point, middle of base and high
    };

    IsoscelesTriangle(calcMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};

// equilateral

class IsoscelesTriangle: public Triangle{ 
    
    enum calcMethod{
        point1side, // coord of 1 point, size of side 
        midBase, // coord of 1 point, middle of base and high
        mid3     // coord of middle of triangels and side size
    };

    IsoscelesTriangle(calcMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};