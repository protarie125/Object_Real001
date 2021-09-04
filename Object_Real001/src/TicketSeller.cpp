#include "TicketSeller.h"

TicketSeller::TicketSeller(PTicketOffice ticketOffice)
    : ticketOffice_{ ticketOffice }
{
}

void TicketSeller::sellTo(PAudience audience) const
{
    if (audience->getBag()->hasInvitation())
    {
        const auto& ticket = ticketOffice_->getTicket();
        audience->getBag()->setTicket(ticket);
    }
    else
    {
        const auto& ticket = ticketOffice_->getTicket();
        audience->getBag()->minusAmount(ticket->getFee());
        ticketOffice_->plusAmount(ticket->getFee());
        audience->getBag()->setTicket(ticket);
    }
}