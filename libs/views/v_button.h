#pragma once 
#include <string>
#include "viewObject.h"
#include "../controllers/baseController.h"
#include "../model.h"

/*
* @brief - class Button
*/
class Button : public ViewObject{
    
    public:
        Button(const int& p_x, const int& p_y, const int& s_x, const int& s_y) : ViewObject(p_x, p_y, s_x, s_y){ std::cout << "create button\n";}
        ~Button() { std::cout << "create button\n";  };
        void onClick(){m_conroller->activate(0,0);}
        
        /*
        * @brief -  caption seter
        * @param str - new Caption
        * @return - void
        */
        void setCaption(std::string& str) { m_caption = str;};
        void setCaption(std::string str) { m_caption = str;};

        /*
        * @brief -  Controller seter
        * @param controller - new Controller
        * @return - void
        */
        void setController(std::unique_ptr<Controller> controller) {  m_conroller = std::move(controller); }
    private:

        std::string m_caption;
        
};