#include "Audience.h"

Audience::Audience(PBag bag)
    : bag_{ bag }
{
}

long Audience::buy(PTicket ticket) const
{
    if (bag_->hasInvitation())
    {
        bag_->setTicket(ticket);
        return 0L;
    }
    else
    {
        bag_->setTicket(ticket);
        bag_->minusAmount(ticket->getFee());
        return ticket->getFee();
    }
}