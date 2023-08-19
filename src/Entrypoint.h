#pragma once
#include "Core.h"
#include "Log.h"


#ifdef IL_MAC
extern Interlinked:: Application* Interlinked::CreateApplication();

int main(int argc, char** argv)
{
    Interlinked::Log::Init();
    Interlinked::Log::GetCoreLogger()->warn("Initialization Completed!");
    Interlinked::Log::GetClientLogger()->info("Hello There!");

    auto app = Interlinked::CreateApplication();
    app->Run();
    delete app;
}
#endif