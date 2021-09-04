#pragma once
#include "sfx.h"

#include <chrono>

/* √ ¥Î¿Â */
class Invitation {
private:
    std::chrono::system_clock::time_point when_{};
};

using PInvitation = std::shared_ptr<Invitation>;