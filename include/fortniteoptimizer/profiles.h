// profiles — part of fortnite-optimizer.

#pragma once

#include <string>
#include <vector>

namespace fortniteoptimizer {

class Profiles {
public:
    explicit Profiles(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace fortniteoptimizer
