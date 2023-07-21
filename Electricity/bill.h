#ifndef BILL_H
#define BILL_H
#include "electricityconsumption.h"

class Bill {
public:
    void set_rate(double);
    double get_rate();

    double bill_count(Consumption&, Customer*);
    double calculate(Consumption&, Customer*);

private:
    std::unordered_map<Customer*, double> m_amounth;
    double m_rate;
};

#endif //BILL_H
