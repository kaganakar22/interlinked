#include "../interlinked/src/Interlinked.h"

class xena : public Interlinked::Application
{
public:
    xena()
    {

    }

    ~xena()
    {

    }

};

Interlinked::Application* Interlinked::CreateApplication()
{
    return new xena();
}