#include "TicketSeller.h"

TicketSeller::TicketSeller(PTicketOffice ticketOffice)
    : ticketOffice_{ ticketOffice }
{
}

PTicketOffice TicketSeller::getTicketOffice() const
{
    return ticketOffice_;
}
