#include "Audience.h"

Audience::Audience(PBag bag)
    : bag_{ bag }
{
}

PBag Audience::getBag() const
{
    return bag_;
}
