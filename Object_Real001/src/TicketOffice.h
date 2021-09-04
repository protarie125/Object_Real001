#pragma once
#include "sfx.h"

#include <list>

#include "Ticket.h"

/* 매표소 */
class TicketOffice {
public:
    TicketOffice(long amount, const std::list<PTicket>& tickets);

private:
    /* 판매 금액 */
    long amount_;

    /* 판매할 티켓 */
    std::list<PTicket> tickets_;

public:
    /* 티켓을 판매 */
    PTicket getTicket();

    /* 판매 금액 감소 */
    void minusAmount(long amount);

    /* 판매 금액 증가 */
    void plusAmount(long amount);
};

using PTicketOffice = std::shared_ptr<TicketOffice>;