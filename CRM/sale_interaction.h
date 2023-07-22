#ifndef SALE_H
#define SALE_H
#include "interaction.h"

class Sale : public Interaction {
public:
    Sale () = default;
    Sale(const std::string& user, double amount, int warrant)
        : Interaction("Sale", user), m_amount(amount), m_warrant_period(warrant) {}

    double get_amount () const;
    int get_period () const;

private:
    double m_amount;
    int m_warrant_period;
};

#endif //SALE_H