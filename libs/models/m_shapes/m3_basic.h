#include "../m_multyline.h"

/*
* @brief - Abstract triangle
*/
class Triangle : public Multyline
{
    public:
        Triangle(std::initializer_list<double> &points) : Multyline(points) {}
        
};

/*
* @brief - Versatile triangle
            build method:
                point1 - coord of 1 point, size of 2 lines and 2 angel of it lines
                point2 - coord of 2 point and 2 angels between each side and base
                point3 - coord of 3 point
*/
class VersatileTriangle: public Triangle{ 
    
    enum drawMethod{
        point1,
        point2,
        point3
    };

    VersatileTriangle(drawMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};

/*
* @brief - Isosceles triangle
            build method:
                point1sidecoord of 1 point, size of side and angels of side and base of triangel
                point1base - coord of 1 point, size of base and angels of sides of triangel
                point2side - coord of 2 points, side ends and angel of sides of triangel
                point2base - coord of 2 points, base ends and angel of side and base of triangel
                point3     - coord of 3 point
                midBase    - coord of 1 point - middle of base, length of base, angel of base, triangel high
*/
class IsoscelesTriangle: public Triangle{ 
    
    enum drawMethod{
        point1side,
        point1base,
        point2side,
        point2base,
        point3,
        midBase
    };

    IsoscelesTriangle(drawMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};

/*
* @brief - Equilateral triangle
            build method:
                point1side - coord of 1 point, size of side 
                midBase    - coord of 1 point, middle of base and high
                mid3       - coord of middle of triangels and side size
*/
class EquilateralTriangle: public Triangle{ 
    
    enum calcMethod{
        point1side,
        midBase,
        mid3
    };

    EquilateralTriangle(calcMethod, std::initializer_list<double> &); //  3-angel building depends from choosen  calcMethod

};