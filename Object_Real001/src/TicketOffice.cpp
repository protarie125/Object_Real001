#include "TicketOffice.h"

TicketOffice::TicketOffice(long amount, const std::list<PTicket>& tickets)
    : amount_{ amount }
    , tickets_{ tickets }
{
}

PTicket TicketOffice::getTicket()
{
    const auto& result = tickets_.front();
    tickets_.pop_front();

    return result;
}

void TicketOffice::minusAmount(long amount)
{
    amount_ -= amount;
}

void TicketOffice::plusAmount(long amount)
{
    amount_ += amount;
}
