#include <string>
#include <memory>
#include <vector>


class model 
{
    public:
        model();
        ~model();
        void create();
        void load();
        void save();
        void add();
        void del();

    private:
        std::vector<std::unique_ptr<>>

}