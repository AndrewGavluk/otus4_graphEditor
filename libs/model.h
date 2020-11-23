
#pragma once 
#include <string>
#include <memory>
#include <map>

#include "models/m_multyline.h"

class Model
{
    public:
        Model(){};
        ~Model(){};
        void create();  // create new list
        void load();    // load from file 
        void save();    // save to file
        void add(const Multyline&);     // add new figure
        void del();     // delete figure
        
    private:
        std::vector<std::shared_ptr<Multyline>> m_list;

};