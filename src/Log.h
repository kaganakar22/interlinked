#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Interlinked{
    class Log
    {
        public:
            static void Init();
            inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger;}
            inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {return s_ClientLogger;}
        private:
            static std::shared_ptr<spdlog::logger> s_CoreLogger;
            static std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
}

#define INT_CORE_TRACE(...) ::Interlinked::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define INT_CORE_INFO(...) ::Interlinked::Log::GetCoreLogger()->info(__VA_ARGS__);
#define INT_CORE_WARN(...) ::Interlinked::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define INT_CORE_ERROR(...) ::Interlinked::Log::GetCoreLogger()->error(__VA_ARGS__);
#define INT_CORE_CRITICAL(...) ::Interlinked::Log::GetCoreLogger()->critical(__VA_ARGS__);


#define INT_TRACE(...) ::Interlinked::Log::GetClientLogger()->trace(__VA_ARGS__);
#define INT_INFO(...) ::Interlinked::Log::GetClientLogger()->info(__VA_ARGS__);
#define INT_WARN(...) ::Interlinked::Log::GetClientLogger()->warn(__VA_ARGS__);
#define INT_ERROR(...) ::Interlinked::Log::GetClientLogger()->error(__VA_ARGS__);
#define INT_CRITICAL(...) ::Interlinked::Log::GetClientLogger()->critical(__VA_ARGS__);