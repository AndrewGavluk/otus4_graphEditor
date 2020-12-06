#include <string.h>

#include "model.h"

/*
 * @brief - main Controller
*/
class MainController{

    public:
        MainController() = default;
        MainController(Model& _model) { m_model = std::shared_ptr<Model>(&_model); };
        ~MainController() = default;
        MainController(const MainController& ) = default;
        MainController( MainController&& ) = default;
        
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
        std::shared_ptr<Model> m_model;

        
};

