#include <string.h>

#include "model.h"


class MainController{

    public:
        MainController() = default;
        ~MainController() = default;
        MainController(const MainController& ) = default;
        MainController( MainController&& ) = default;
        
        void ProcessEvent(); 
    private:
        std::unique_ptr<Model> m_model;
        std::string m_chosenFunction;
        int m_numOfClics;
        
};

