#pragma once
#include<list>
#include<iostream>

#include"../models/m_multyline.h"

class Controller
{
    public:
    Controller(std::shared_ptr<Model>& model) {m_Model = model;};
    
    virtual ~Controller() = default;
    Controller(Controller&  other);
    Controller& operator = (Controller&  other);
    Controller(Controller&&  other);
    Controller& operator = (Controller&&  other) ;

    virtual void activate(int cursorPosX, int cursorPosY) = 0;

    private:
        int m_state;
        std::list<int> m_argLists;
        std::shared_ptr<Multyline> m_Multyline;
        std::shared_ptr<Model> m_Model;

};

void Controller::activate(int cursorPosX, int cursorPosY)
{
    (void)cursorPosX;
    (void)cursorPosY;
    std::cout << "activate mainController" << std::endl;
}

class CreateController: public Controller
{
    public:
        CreateController(std::shared_ptr<Model>& model): Controller(model) {};
        ~CreateController() = default;
        void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
            std::cout << "activate CreateController" << std::endl;
        };
};

class LoadController: public Controller
{
    public:
        LoadController(std::shared_ptr<Model>& model): Controller(model) {};
        ~LoadController() = default;
        void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
            std::cout << "activate LoadController" << std::endl;
        };
};
/*
class SaveController: public Controller
{
    public:
        SaveController(Model& model): Controller(model) {};
        ~SaveController() = default;
        void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class DeleteController: public Controller
{
    public:
        DeleteController() = delete;
        DeleteController(Model& model): Controller(model) {};
        ~DeleteController() = default;
        void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

// Graph controller

class MultylineController: public Controller
{
    public:
    MultylineController(): Controller() {};
    ~MultylineController() = default;
    void activate(int cursorPosX, int cursorPosY) override
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class SectionController: public MultylineController
{
    public:
    SectionController() : MultylineController() {};
    ~SectionController() = default;
    void activate(int cursorPosX, int cursorPosY) override
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

// Triangle controllers

class TriangleController: public MultylineController
{
    public:
    TriangleController(): MultylineController() {} ;
    virtual ~TriangleController()= default;
    void activate(int cursorPosX, int cursorPosY) override
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class VersatileTriangleController: public TriangleController
{
    public:
    VersatileTriangleController() : TriangleController() {};
    ~VersatileTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class IsoscelesTriangleController: public TriangleController
{
    public:
    IsoscelesTriangleController() : TriangleController () {};
    ~IsoscelesTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class EquilateralTriangleController: public TriangleController
{
    public:
    EquilateralTriangleController() : TriangleController() {};
    ~EquilateralTriangleController() = default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

// Quadrangle controllers

class QuadrangleController: public MultylineController
{
    public:
    QuadrangleController() : MultylineController() {};
    virtual ~QuadrangleController()= default;
    void activate(int cursorPosX, int cursorPosY) override
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class SquareController: public QuadrangleController
{
    public:
    SquareController() : QuadrangleController() {};
    virtual ~SquareController()= default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class RectangleController: public QuadrangleController
{
    public:
    RectangleController() : QuadrangleController() {};
    virtual ~RectangleController()= default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class RhombousController: public QuadrangleController
{
    public:
    RhombousController() : QuadrangleController() {};
    ~RhombousController()= default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

class ParallelogramController: public QuadrangleController
{
    public:
    ParallelogramController() : QuadrangleController() {};
    ~ParallelogramController()= default;
    void activate(int cursorPosX, int cursorPosY) final
        {
            (void)cursorPosX;
            (void)cursorPosY;
        };
};

*/
