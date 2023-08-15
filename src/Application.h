#pragma once

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