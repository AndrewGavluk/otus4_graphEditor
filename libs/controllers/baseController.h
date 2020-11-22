#pragma once
#include<list>

#include"../models/m_multyline.h"

class Controller
{
    public:
    Controller() = default;
    virtual ~Controller() = default;
    
    Controller(Controller&  other);
    Controller& operator = (Controller&  other) ;

    Controller(Controller&&  other);
    Controller& operator = (Controller&&  other) ;

    virtual void activate(int cursorPosX, int cursorPosY) = 0;

    private:
        int m_state;
        std::list<int> m_argLists;
        std::unique_ptr<Multyline> m_Multyline;

};

void Controller::activate(int cursorPosX, int cursorPosY)
{
    (void)cursorPosX;
    (void)cursorPosY;
}

class CreateController: public Controller
{
    public:
        CreateController(): Controller() {};
        ~CreateController() = default;
        void activate(int cursorPosX, int cursorPosY)
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

// Graph controller

class MultylineController: public Controller
{
    public:
    MultylineController();
    virtual ~MultylineController() = default;
    void activate(int cursorPosX, int cursorPosY)
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class SectionController: public MultylineController
{
    public:
    SectionController();
    ~SectionController() = default;
    void activate(int cursorPosX, int cursorPosY)
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

// Triangle controllers

class TriangleController: public MultylineController
{
    public:
    TriangleController()= default;
    virtual ~TriangleController()= default;
    void activate(int cursorPosX, int cursorPosY)
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class VersatileTriangleController: public TriangleController
{
    public:
    VersatileTriangleController();
    ~VersatileTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY);
};

class IsoscelesTriangleController: public TriangleController
{
    public:
    IsoscelesTriangleController();
    ~IsoscelesTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY);
};

class EquilateralTriangleController: public TriangleController
{
    public:
    EquilateralTriangleController();
    ~EquilateralTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY);
};

// Quadrangle controllers

class QuadrangleController: public MultylineController
{
    public:
    QuadrangleController();
    virtual ~QuadrangleController()= default;
    void activate(int cursorPosX, int cursorPosY)
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class SquareController: public QuadrangleController
{
    public:
    SquareController();
    virtual ~SquareController()= default;
    void activate(int cursorPosX, int cursorPosY);
};

class RectangleController: public QuadrangleController
{
    public:
    RectangleController();
    virtual ~RectangleController()= default;
    void activate(int cursorPosX, int cursorPosY);
};

class RhombousController: public QuadrangleController
{
    public:
    RhombousController();
    ~RhombousController()= default;
    void activate(int cursorPosX, int cursorPosY);
};

class ParallelogramController: public QuadrangleController
{
    public:
    ParallelogramController();
    ~ParallelogramController()= default;
    void activate(int cursorPosX, int cursorPosY);
};


