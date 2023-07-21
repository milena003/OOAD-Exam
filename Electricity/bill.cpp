#include "bill.h"

void Bill::set_rate(double rate) {
    m_rate = rate;
}

double Bill::get_rate() {
    return m_rate;
}

double Bill::bill_count(Consumption& wasted, Customer* cust) {
    return wasted.summary(cust);
}

double Bill::calculate (Consumption& wasted, Customer* cust) {
    return bill_count(wasted, cust) * get_rate();
}