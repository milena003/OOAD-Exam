#ifndef GENERATEBILL_H
#define GENERATEBILL_H
#include <vector>
#include <fstream>
#include "bill.h"

const std::string file_end = "_.txt";

class Generate {
public:
    void set_bills (Consumption&, Customer*, Bill*);
    void save_report(Customer*, Bill*);

private:
    std::vector<Bill*> m_customs;
    std::vector<double> m_bills;
};

#endif //GENERATEBILL_H