#pragma once
#include "Core.h"

namespace Interlinked{
    class Application
    {
    public:
        Application();
        ~Application();

        void Run();
    };

    Application* CreateApplication();
}