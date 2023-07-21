#include "electricityconsumption.h"

void Consumption::add_consuption (Customer* cust, double size) {
    m_consuption[cust->get_name()].push_back(size);
}

double Consumption::summary(Customer* cust) {
    double sum = 0;
    for (auto& it : m_consuption) {
        if (cust->get_name() == it.first) {
            for (auto it1 : it.second) {
                sum += it1;
            }
        }
    }
    return sum;
}