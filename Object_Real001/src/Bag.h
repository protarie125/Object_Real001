#pragma once
#include "sfx.h"

#include "Invitation.h"
#include "Ticket.h"

/* 관람객이 소지품을 보관하는 가방 */
class Bag {
public:
    explicit Bag(long amount);

    Bag(PInvitation invitation, long amount);

private:
    /* 보유한 현금 */
    long amount_{ 0 };

    /* 소유한 초대장 */
    PInvitation invitation_{ nullptr };

    /* 소유한 티켓 */
    PTicket ticket_{ nullptr };

public:
    /* 초대장의 보유 여부 */
    bool hasInvitation() const;

    /* 티켓의 소유 여부 */
    bool hasTicket() const;

    /* 초대장을 티켓으로 교환 */
    void setTicket(PTicket ticket);

    /* 현금을 감소 */
    void minusAmount(long amount);

    /* 현금을 증가 */
    void plusAmount(long amount);
};

using PBag = std::shared_ptr<Bag>;