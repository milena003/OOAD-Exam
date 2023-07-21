#ifndef ELECTUCUTY_H
#define ELECTUCUTY_H
#include "customer.h"
#include <iostream>
#include <unordered_map>

class Consumption {
public:
    void add_consuption (Customer*, double);
    double summary(Customer*);

private:
    std::unordered_map<std::string, std::vector<double>> m_consuption;
};

#endif //ELECTUCUTY_H

