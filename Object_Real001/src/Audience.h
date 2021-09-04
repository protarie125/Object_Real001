#pragma once
#include "sfx.h"

#include "Bag.h"

/* ������ */
class Audience {
public:
    explicit Audience(PBag bag);

private:
    PBag bag_;

public:
    PBag getBag() const;
};

using PAudience = std::shared_ptr<Audience>;