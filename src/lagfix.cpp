// lagfix.cpp — part of fortnite-optimizer.

#include "fortniteoptimizer/lagfix.h"

#include <cstdio>

namespace fortniteoptimizer {

Lagfix::Lagfix(const std::string& config_path)
    : config_path_(config_path) {}

void Lagfix::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Lagfix::run() {
    if (verbose_) std::fprintf(stderr, "[fortnite-optimizer] lagfix: run\n");
    // core logic lives here
    return true;
}

}  // namespace fortniteoptimizer
