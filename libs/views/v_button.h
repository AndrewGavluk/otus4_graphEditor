#pragma once 
#include <string>
#include "viewObject.h"
#include "../controllers/baseController.h"

class Button : public ViewObject{
    
    public:
        Button(const int& p_x, const int& p_y, const int& s_x, const int& s_y) : ViewObject(p_x, p_y, s_x, s_y){}
        ~Button() = default;
        void onClick();
        void setCaption(std::string& str) { m_caption = str;};
        void setCaption(std::string str) { m_caption = str;};
        template <typename T>
        void setController() { m_conroller = std::make_unique<T>(); }
    private:

        std::string m_caption;
        
};