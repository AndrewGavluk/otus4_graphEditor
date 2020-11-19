#include <memory>

#include "viewObject.h"
#include "../model.h"

class Canvas: public ViewObject
{
        void updateCanvas();
    private: 
    // m_pixelFIeld;
        std::unique_ptr <model> m_model; 
};