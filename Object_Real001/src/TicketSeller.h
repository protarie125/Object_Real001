#pragma once
#include "sfx.h"

#include "TicketOffice.h"

/* 판매원 */
class TicketSeller
{
public:
    explicit TicketSeller(PTicketOffice ticketOffice);

private:
    /* 자신이 일하는 매표소 */
    PTicketOffice ticketOffice_;

public:
    PTicketOffice getTicketOffice() const;
};

using PTicketSeller = std::shared_ptr<TicketSeller>;