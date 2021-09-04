#pragma once
#include "sfx.h"

#include "Audience.h"
#include "TicketSeller.h"

/* �ұ��� */
class Theater {
public:
    explicit Theater(PTicketSeller ticketSeller);

private:
    PTicketSeller ticketSeller_;

public:
    void enter(PAudience audience) const;
};

using PTheater = std::shared_ptr<Theater>;