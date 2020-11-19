#include <memory>
#include <vector>

#include "views/v_button.h"
#include "views/v_canvas.h"

class view
{
    view() = default;

    public:
        std::unique_ptr<Canvas> m_canvas;
        std::vector<std::unique_ptr<multyline>> m_shapes;
}