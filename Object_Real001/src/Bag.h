#pragma once
#include "sfx.h"

#include "Invitation.h"
#include "Ticket.h"

/* �������� ����ǰ�� �����ϴ� ���� */
class Bag {
public:
    explicit Bag(long amount);

    Bag(PInvitation invitation, long amount);

private:
    /* ������ ���� */
    long amount_{ 0 };

    /* ������ �ʴ��� */
    PInvitation invitation_{ nullptr };

    /* ������ Ƽ�� */
    PTicket ticket_{ nullptr };

public:
    /* �ʴ����� ���� ���� */
    bool hasInvitation() const;

    /* Ƽ���� ���� ���� */
    bool hasTicket() const;

    /* �ʴ����� Ƽ������ ��ȯ */
    void setTicket(PTicket ticket);

    /* ������ ���� */
    void minusAmount(long amount);

    /* ������ ���� */
    void plusAmount(long amount);
};

using PBag = std::shared_ptr<Bag>;