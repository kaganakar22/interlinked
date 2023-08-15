#include "../src/Interlinked.h"

class system : public Interlinked::Application
{
public:
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