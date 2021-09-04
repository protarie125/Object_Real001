#include "TicketSeller.h"

TicketSeller::TicketSeller(PTicketOffice ticketOffice)
    : ticketOffice_{ ticketOffice }
{
}

void TicketSeller::sellTo(PAudience audience) const
{
    ticketOffice_->plusAmount(audience->buy(ticketOffice_->getTicket()));
}