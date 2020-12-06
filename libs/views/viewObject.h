
#pragma once 
#include <memory>

#include "../view.h"
#include "../controllers/baseController.h"

/*
* @brief - Abstract view for form object
*/
class ViewObject
{
    public:
        /*
        * @brief - constructor
        * @param p_x  -  X-axis position 
        * @param p_y  -  Y-axis position 
        * @param s_x  -  X-axis scale 
        * @param s_y  -  Y-axis scale 
        * @return - void
        */
        ViewObject(const int p_x, const int p_y, const int s_x, const int s_y): pos_x{p_x}, pos_y{p_y}, size_x{s_x}, size_y{s_y} {std::cout << "create view obj\n";};
        virtual ~ViewObject() {std::cout << "delete view obj\n";};
        
        /*
        * @brief - constructor
        * @param Controller - Controller set to
        * @return - void
        */
        void setController(Controller&);

        /*
        * @brief - onClick processor
        * @return - void
        */
        void onClick();
    protected:
        std::unique_ptr<Controller> m_conroller;
    private:   
        int pos_x;
        int pos_y;
        int size_x;
        int size_y;
};