#include "../libs/model.h" 
#include "../libs/view.h" 


int main(){

    View mainView;
    std::shared_ptr<Model> mainModel = std::make_shared<Model>();

    Canvas mainC(250, 250, 500, 500);
    mainView.setCanvas(mainC);

    Button *bCreate = new Button(600, 100, 75, 75);
    bCreate->setCaption(std::string("Create new image"));  
    bCreate->setController(std::make_unique<CreateController>(mainModel));
    bCreate->onClick();

    Button *bLoad = new Button(700, 100, 75, 75);
    bLoad->setCaption(std::string("Load image"));  
    bLoad->setController(std::make_unique<LoadController>(mainModel)); 
    bLoad->onClick();

    /*Button bSave(800, 100, 75, 75);
    bSave.setCaption(std::string("Save image"));  
    bSave.setController<SaveController>(mainModel);

    Button bDelete(900, 100, 75, 75);
    bDelete.setCaption(std::string("Delete image"));  
    bDelete.setController<SaveController>();

    Button bVersatileTriangle(600, 200, 75, 75);
    bVersatileTriangle.setCaption(std::string("Vers 3-ang"));  
    bVersatileTriangle.setController<VersatileTriangleController>();

    Button bIsoscelesTriangle(700, 200, 75, 75);
    bIsoscelesTriangle.setCaption(std::string("Iso 3-ang"));  
    bIsoscelesTriangle.setController<IsoscelesTriangleController>();

    Button bEquilateralTriangle(800, 200, 75, 75);
    bEquilateralTriangle.setCaption(std::string("Equil 3-ang"));  
    bEquilateralTriangle.setController<EquilateralTriangleController>();

    Button bSquare(500, 300, 75, 75);
    bSquare.setCaption(std::string("Square"));  
    bSquare.setController<SquareController>();

    Button bRectangle(600, 300, 75, 75);
    bRectangle.setCaption(std::string("Rectangle"));  
    bRectangle.setController<RectangleController>();

    Button bRhombous(700, 300, 75, 75);
    bRhombous.setCaption(std::string("Rhombous"));  
    bRhombous.setController<RhombousController>();

    Button bParallelogram(800, 300, 75, 75);
    bParallelogram.setCaption(std::string("Parallelogram"));  
    bParallelogram.setController<ParallelogramController>();

    Button bMultyLine(750, 400, 300, 75);
    bMultyLine.setCaption(std::string("MultyLine"));  
    bMultyLine.setController<MultylineController>();*/
    return 0;
}
