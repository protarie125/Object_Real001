#pragma once
#include "sfx.h"

#include "TicketOffice.h"

/* �Ǹſ� */
class TicketSeller
{
public:
    explicit TicketSeller(PTicketOffice ticketOffice);

private:
    /* �ڽ��� ���ϴ� ��ǥ�� */
    PTicketOffice ticketOffice_;

public:
    PTicketOffice getTicketOffice() const;
};

using PTicketSeller = std::shared_ptr<TicketSeller>;