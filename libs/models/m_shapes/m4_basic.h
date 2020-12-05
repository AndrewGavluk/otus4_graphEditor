#include "../m_multyline.h"

/*
* @brief - Abstract Quadrangle
*/
class Quadrangle : public Multyline
{
    public:
        Quadrangle(std::initializer_list<double> &points) : Multyline(points) {}
        
};

/*
* @brief - Square
            build method:
                side - 2 point at 1 side
                diagonal - 2 point at diagonal
*/
class Square : public Quadrangle
{
    public:
    enum drawMethod{
        side,
        diagonal 
     };
    Square(drawMethod, std::initializer_list<double> &);
};

/*
* @brief - Rectangle
            build method:
                point3 -  3 point of rectangle corner
                point2 -  2 point at diagonal and stze of smaller side
                point1 -  1 point, size of 2 sides, and angel
*/
class Rectangle: public Quadrangle
{
    public:
    enum drawMethod{
        point3,
        point2, 
        point1
     };
    Rectangle(drawMethod, std::initializer_list<double> &);
};

/*
* @brief - Rhombous
            build method:
                point3 -  3 point of rhombous corner
                point2 -  2 point at biger diagonal and stze of smaller diagonal
                point1 -  1 point, size of 2 sides, and angel
*/
class Rhombous: public Quadrangle
{
    public:
    enum drawMethod{
        point3, 
        point2, 
        point1
     };
    Rhombous(drawMethod, std::initializer_list<double> &);
};

/*
* @brief - Rhombous
            build method:
                point3 -  3 point of rhombous corner
                point2 -  2 point at biger diagonal and stze of smaller diagonal
                point1 -  1 point, size of 2 sides, and angel
*/
class Parallelogram: public Quadrangle
{
    public:
    enum drawMethod{
        point3,
        point2,
        point1
     };
    Parallelogram(drawMethod, std::initializer_list<double> &);
};

/*
* @brief - VersatileQuadrangle
            build method:
                point4 -  4 point of Quadrangle corner
*/
class VersatileQuadrangle: public Quadrangle
{
    public:
    enum drawMethod{
        point4 // 4 point of Quadrangle corner
     };
    VersatileQuadrangle(drawMethod, std::initializer_list<double> &);
};
