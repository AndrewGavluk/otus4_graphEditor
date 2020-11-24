#include "../libs/model.h" 
#include "../libs/view.h" 


int main(){

    std::unique_ptr<View> mainView = std::make_unique<View>();
    std::shared_ptr<Model> mainModel = std::make_shared<Model>();

    Canvas mainC(250, 250, 500, 500);
    //mainView->setCanvas(mainC);

    auto& bCreate = mainView->addButton(600, 100, 75, 75);
    bCreate->setCaption(std::string("Create new image"));  
    bCreate->setController(std::make_unique<CreateController>(mainModel));
    bCreate->onClick();

    auto& bLoad = mainView->addButton(700, 100, 75, 75);
    bLoad->setCaption(std::string("Load image"));  
    bLoad->setController(std::make_unique<LoadController>(mainModel)); 
    bLoad->onClick();

    auto& bSave = mainView->addButton(800, 100, 75, 75);
    bSave->setCaption(std::string("Save image"));  
    bSave->setController(std::make_unique<SaveController>(mainModel));
    bSave->onClick();

    auto& bDelete = mainView->addButton(900, 100, 75, 75);
    bDelete->setCaption(std::string("Delete image"));  
    bDelete->setController(std::make_unique<DeleteController>(mainModel));
    bDelete->onClick();

    auto& bVersatileTriangle = mainView->addButton(600, 200, 75, 75);
    bVersatileTriangle->setCaption(std::string("Vers 3-ang"));  
    bVersatileTriangle->setController(std::make_unique<VersatileTriangleController>(mainModel));
    bVersatileTriangle->onClick();

    auto& bIsoscelesTriangle = mainView->addButton(700, 200, 75, 75);
    bIsoscelesTriangle->setCaption(std::string("Iso 3-ang"));  
    bIsoscelesTriangle->setController(std::make_unique<IsoscelesTriangleController>(mainModel));
    bIsoscelesTriangle->onClick();

    auto& bEquilateralTriangle = mainView->addButton(800, 200, 75, 75);
    bEquilateralTriangle->setCaption(std::string("Equil 3-ang"));  
    bEquilateralTriangle->setController(std::make_unique<EquilateralTriangleController>(mainModel));
    bEquilateralTriangle->onClick();

    auto& bSquare = mainView->addButton(500, 300, 75, 75);
    bSquare->setCaption(std::string("Square"));  
    bSquare->setController(std::make_unique<SquareController>(mainModel));
    bSquare->onClick();

    auto& bRectangle = mainView->addButton(600, 300, 75, 75);
    bRectangle->setCaption(std::string("Rectangle"));  
    bRectangle->setController(std::make_unique<RectangleController>(mainModel));
    bRectangle->onClick();

    auto& bRhombous = mainView->addButton(700, 300, 75, 75);
    bRhombous->setCaption(std::string("Rhombous"));  
    bRhombous->setController(std::make_unique<RhombousController>(mainModel));
    bRhombous->onClick();

    auto& bParallelogram = mainView->addButton(800, 300, 75, 75);
    bParallelogram->setCaption(std::string("Parallelogram"));  
    bParallelogram->setController(std::make_unique<ParallelogramController>(mainModel));

    auto&  bMultyLine = mainView->addButton(750, 400, 300, 75);
    bMultyLine->setCaption(std::string("MultyLine"));  
    bMultyLine->setController(std::make_unique<MultylineController>(mainModel));
    bMultyLine->onClick();

    return 0;
}
