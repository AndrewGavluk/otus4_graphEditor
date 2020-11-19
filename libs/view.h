#include <memory>
#include <vector>

#include "views/v_button.h"
#include "views/v_canvas.h"

class View
{
    View() = default;

    public:
        std::unique_ptr<Canvas> m_canvas;
        std::vector<std::unique_ptr<Button>> m_buttons;
};