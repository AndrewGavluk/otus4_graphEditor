#pragma once 
#include <memory>
#include "../model.h"
#include "viewObject.h"

class Canvas: public ViewObject
{
    public:
        Canvas(const int& p_x, const int& p_y, const int& s_x, const int& s_y) : ViewObject(p_x, p_y, s_x, s_y){}
        ~Canvas() = default;
        void updateCanvas();
        
    private: 
    // m_pixelFIeld;
        std::shared_ptr <Model> m_model; 
};