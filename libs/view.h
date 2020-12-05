#pragma once 
#include <memory>
#include <vector>

#include "views/v_button.h"
#include "views/v_canvas.h"

#include "controller.h"

/*
 * @brief - main view for class
*/
class View
{
    public:
        View(){};
        ~View(){};

        /*
        * @brief - Controller setter
        * @param MainController  -  reference to MainController
        * @return - void
        */
        void setController(const MainController&){};

        /*
        * @brief - Canvas setter
        * @param MainController  -  reference to Canvas
        * @return - void
        */
        void setCanvas(const Canvas&){};

        /*
        * @brief - function to add new button to form
        * @param p_x  -  X-axis position 
        * @param p_y  -  Y-axis position 
        * @param s_x  -  X-axis scale 
        * @param s_y  -  Y-axis scale 
        * @return - refernce to button
        */
        std::unique_ptr<Button>&  addButton(const int& p_x, const int& p_y, const int& s_x, const int& s_y){ 
                return *m_buttons.emplace( m_buttons.end(), std::make_unique<Button>(p_x, p_y, s_x, s_y));
        };

    private:
        std::shared_ptr<MainController> m_controller;
        std::shared_ptr<Canvas> m_canvas;
        std::vector<std::unique_ptr<Button>> m_buttons;
};