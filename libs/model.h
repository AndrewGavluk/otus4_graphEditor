
#pragma once 
#include <string>
#include <memory>
#include <map>

#include <iostream>

#include "models/m_multyline.h"

/*
* @brief - Main model class
*/
class Model
{
    public:
        Model(){std::cout << "create model\n";};
        ~Model(){std::cout << "delete model\n";};
        
        /*
        * @brief - create new image
        * @return - void
        */
        void create();  // create new list

        /*
        * @brief - load image
        * @return - void
        */
        void load();    // load from file 

        /*
        * @brief - save image
        * @return - void
        */
        void save();    // save to file


        /*
        * @brief - add image
        * @param Multyline  -  Multyline add to
        * @return - void
        */
        void add(const Multyline&);     // add new figure

        /*
        * @brief - save image
        * @param Multyline  -  Multyline del to
        * @return - void
        */
        void del(const Multyline&);     // delete figure
        
    private:
        std::vector<std::shared_ptr<Multyline>> m_list;

};