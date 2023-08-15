#pragma once
#include "Core.h"

#ifdef IL_MAC
extern Interlinked:: Application* Interlinked::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Interlinked::CreateApplication();
    app->Run();
    delete app;
}
#endif