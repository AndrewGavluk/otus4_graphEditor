#include <string>
#include <memory>
#include <vector>

#include "models/m_multyline.h"


class model 
{
    public:
        model();
        ~model();
        void create(); // create new list
        void load();    // load from file 
        void save();    // save to file
        void add(const multyline&);     // add new figure
        void del();     // delete figure

    private:
        std::vector<std::unique_ptr<multyline>> m_shapes;

};