#include "Theater.h"

Theater::Theater(PTicketSeller ticketSeller)
    : ticketSeller_{ ticketSeller }
{
}

void Theater::enter(PAudience audience) const
{
    ticketSeller_->sellTo(audience);
}