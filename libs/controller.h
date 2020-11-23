#include <string.h>

#include "model.h"


class MainController{

    public:
        MainController() = default;
        MainController(Model& _model) { m_model = std::shared_ptr<Model>(&_model); };
        ~MainController() = default;
        MainController(const MainController& ) = default;
        MainController( MainController&& ) = default;
        
        void create();  // create new list
        void load();    // load from file 
        void save();    // save to file
        void add(const Multyline&);     // add new figure
        void del();     // delete figure

    private:
        std::shared_ptr<Model> m_model;

        
};

