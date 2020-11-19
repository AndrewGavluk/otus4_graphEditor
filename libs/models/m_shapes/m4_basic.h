#include "../m_multyline.h"

class Quadrangle : public Multyline
{
    public:
        Quadrangle(std::initializer_list<double> &points) : Multyline(points) {}
        
};

class Square : public Quadrangle
{
    public:
    enum drawMethod{
        side, // 2 point at 1 side
        diagonal // 2 point at diagonal
     };
    Square(drawMethod, std::initializer_list<double> &);
};

class Rectangle: public Quadrangle
{
    public:
    enum drawMethod{
        point3, // 3 point of rectangle corner
        point2, // 2 point at diagonal and stze of smaller side
        point1 // 1 point, size of 2 sides, and angel
     };
    Rectangle(drawMethod, std::initializer_list<double> &);
};

class Rhombous: public Quadrangle
{
    public:
    enum drawMethod{
        point3, // 3 point of rhombous corner
        point2, // 2 point at biger diagonal and stze of smaller diagonal
        point1 // 1 point, size of 2 sides, and angel
     };
    Rhombous(drawMethod, std::initializer_list<double> &);
};

class Parallelogram: public Quadrangle
{
    public:
    enum drawMethod{
        point3, // 3 point of rhombous corner
        point2, // 2 point at biger diagonal, stze of smaller diagonal and angel
        point1 // 1 point, size of 2 sides, and 2 angels
     };
    Parallelogram(drawMethod, std::initializer_list<double> &);
};
