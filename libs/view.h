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
        std::unique_ptr<Button>&  addButton(const int& p_x, const int& p_y, const int& s_x, const int& s_y){ 
                return *m_buttons.emplace( m_buttons.end(), std::make_unique<Button>(p_x, p_y, s_x, s_y));
        };

    private:
        std::shared_ptr<MainController> m_controller;
        std::shared_ptr<Canvas> m_canvas;
        std::vector<std::unique_ptr<Button>> m_buttons;
};