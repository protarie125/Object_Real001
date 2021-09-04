#pragma once
#include "sfx.h"

#include <list>

#include "Ticket.h"

/* ��ǥ�� */
class TicketOffice {
public:
    TicketOffice(long amount, const std::list<PTicket>& tickets);

private:
    /* �Ǹ� �ݾ� */
    long amount_;

    /* �Ǹ��� Ƽ�� */
    std::list<PTicket> tickets_;

public:
    /* Ƽ���� �Ǹ� */
    PTicket getTicket();

    /* �Ǹ� �ݾ� ���� */
    void minusAmount(long amount);

    /* �Ǹ� �ݾ� ���� */
    void plusAmount(long amount);
};

using PTicketOffice = std::shared_ptr<TicketOffice>;