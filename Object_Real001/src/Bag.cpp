#include "Bag.h"

Bag::Bag(long amount)
    : amount_{ amount }
{
}

Bag::Bag(PInvitation invitation, long amount)
    : amount_{ amount }
    , invitation_{ invitation }
{
}

long Bag::hold(PTicket ticket)
{
    if (hasInvitation())
    {
        setTicket(ticket);

        return 0L;
    }
    else
    {
        setTicket(ticket);
        minusAmount(ticket->getFee());

        return ticket->getFee();
    }
}

bool Bag::hasInvitation() const
{
    return (invitation_ != nullptr);
}

bool Bag::hasTicket() const
{
    return (ticket_ != nullptr);
}

void Bag::setTicket(PTicket ticket)
{
    ticket_ = ticket;
}

void Bag::minusAmount(long amount)
{
    amount_ -= amount;
}

void Bag::plusAmount(long amount)
{
    amount_ += amount;
}