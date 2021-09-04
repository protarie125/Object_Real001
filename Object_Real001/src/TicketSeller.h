#pragma once
#include "sfx.h"

#include "TicketOffice.h"
#include "Audience.h"

/* 판매원 */
class TicketSeller
{
public:
    explicit TicketSeller(PTicketOffice ticketOffice);

private:
    /* 자신이 일하는 매표소 */
    PTicketOffice ticketOffice_;

public:
    /* 판매원이 직접 관람객에게 티켓을 판매한다 */
    void sellTo(PAudience audience) const;
};

using PTicketSeller = std::shared_ptr<TicketSeller>;