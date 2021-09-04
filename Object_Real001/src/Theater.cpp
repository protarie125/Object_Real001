#include "Theater.h"

Theater::Theater(PTicketSeller ticketSeller)
    : ticketSeller_{ ticketSeller }
{
}

void Theater::enter(PAudience audience) const
{
    if (audience->getBag()->hasInvitation())
    {
        const auto& ticket = ticketSeller_->getTicketOffice()->getTicket();
        audience->getBag()->setTicket(ticket);
    }
    else
    {
        const auto& ticket = ticketSeller_->getTicketOffice()->getTicket();
        audience->getBag()->minusAmount(ticket->getFee());
        ticketSeller_->getTicketOffice()->plusAmount(ticket->getFee());
        audience->getBag()->setTicket(ticket);
    }
}
