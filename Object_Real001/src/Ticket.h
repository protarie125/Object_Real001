#pragma once
#include "sfx.h"

/* Ƽ�� */
class Ticket {
private:
    long fee_{ 0 };

public:
    long getFee() const;
};

using PTicket = std::shared_ptr<Ticket>;