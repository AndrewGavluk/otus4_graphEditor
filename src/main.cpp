//#include "../libs/model.h" 
#include "../libs/view.h" 


int main(){

    View mainView{};
    
    Canvas mainC(250, 250, 500, 500);
    mainView.setCanvas(mainC);

    Button bCreate(600, 100, 75, 75);
    bCreate.setCaption(std::string("Create new image"));
    
    Controller* creation = new CreateController();
    (void) creation;
    bCreate.setController<CreateController>();

    return 0;
}
