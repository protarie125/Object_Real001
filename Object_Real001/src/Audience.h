#pragma once
#include "sfx.h"

#include "Bag.h"
#include "Ticket.h"

/* ������ */
class Audience {
public:
    explicit Audience(PBag bag);

private:
    PBag bag_;

public:
    /* Ƽ���� ���濡 �ְ�, ������ �ݾ��� ��ȯ�Ѵ� */
    long buy(PTicket ticket) const;
};

using PAudience = std::shared_ptr<Audience>;