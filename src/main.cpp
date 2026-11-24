// main.cpp — entry point. Wires config and subsystems together.

#include "fortniteoptimizer/settings.h"
#include "fortniteoptimizer/tuner.h"
#include "fortniteoptimizer/lagfix.h"
#include "fortniteoptimizer/profiles.h"
#include "fortniteoptimizer/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    fortniteoptimizer::Settings settings = fortniteoptimizer::Settings::load_default();
    fortniteoptimizer::Tuner tuner(settings.store_path);
    fortniteoptimizer::Lagfix lagfix(settings.store_path);
    fortniteoptimizer::Profiles profiles(settings.store_path);
    fortniteoptimizer::Cli cli(settings.store_path);
    std::fprintf(stderr, "[fortnite-optimizer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
