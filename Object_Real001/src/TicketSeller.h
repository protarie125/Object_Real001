#pragma once
#include "sfx.h"

#include "TicketOffice.h"
#include "Audience.h"

/* �Ǹſ� */
class TicketSeller
{
public:
    explicit TicketSeller(PTicketOffice ticketOffice);

private:
    /* �ڽ��� ���ϴ� ��ǥ�� */
    PTicketOffice ticketOffice_;

public:
    /* �Ǹſ��� ���� ���������� Ƽ���� �Ǹ��Ѵ� */
    void sellTo(PAudience audience) const;
};

using PTicketSeller = std::shared_ptr<TicketSeller>;