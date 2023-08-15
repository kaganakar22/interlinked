#include <Interlinked.h>

class system : public Interlinked::Application
{
    system()
    {

    }

    ~system()
    {

    }

};

Interlinked::Application* Interlinked::CreateApplication()
{
    return new system();
}