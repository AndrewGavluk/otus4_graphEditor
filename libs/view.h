#pragma once 
#include <memory>
#include <vector>

#include "views/v_button.h"
#include "views/v_canvas.h"

#include "controller.h"

class View
{
    public:
        View(){};
        ~View(){};
        void setController(const MainController&){};
        void setCanvas(const Canvas&){};
        void addButton(const Button&){};

    private:
        std::unique_ptr<MainController> m_controller;
        std::unique_ptr<Canvas> m_canvas;
        std::vector<std::unique_ptr<Button>> m_buttons;
};