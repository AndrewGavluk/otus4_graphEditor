
#pragma once 
#include <memory>

#include "../view.h"
#include "../controllers/baseController.h"


class ViewObject
{
    public:
        ViewObject(const int p_x, const int p_y, const int s_x, const int s_y): pos_x{p_x}, pos_y{p_y}, size_x{s_x}, size_y{s_y} {};
        virtual ~ViewObject() = default;
        void setController(Controller&);
        void onClick();
    protected:
        std::unique_ptr<Controller> m_conroller;
    private:   
        int pos_x;
        int pos_y;
        int size_x;
        int size_y;
};