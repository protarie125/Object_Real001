#include "Audience.h"

Audience::Audience(PBag bag)
    : bag_{ bag }
{
}

long Audience::buy(PTicket ticket) const
{
    return bag_->hold(ticket);
}