#pragma once
#include "sfx.h"

#include "Audience.h"
#include "TicketSeller.h"

/* º“±ÿ¿Â */
class Theater {
public:
    explicit Theater(PTicketSeller ticketSeller);

private:
    PTicketSeller ticketSeller_;

public:
    void enter(PAudience audience) const;
};

using PTheater = std::shared_ptr<Theater>;