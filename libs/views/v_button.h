#include <string>

#include "viewObject.h"

class Button : public ViewObject
{
    
    public:
        void onClick();
        void setCaption(std::string& );

    private:
        std::string caption;
};