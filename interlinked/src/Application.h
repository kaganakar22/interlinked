#pragma once
#include "Core.h"
#include "intpch.h"

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