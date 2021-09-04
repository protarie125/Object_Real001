#pragma once
#include "sfx.h"

#include "Bag.h"
#include "Ticket.h"

/* 관람객 */
class Audience {
public:
    explicit Audience(PBag bag);

private:
    PBag bag_;

public:
    /* 티켓을 가방에 넣고, 지불한 금액을 반환한다 */
    long buy(PTicket ticket) const;
};

using PAudience = std::shared_ptr<Audience>;