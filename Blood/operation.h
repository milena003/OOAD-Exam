#ifndef OPERATION_H
#define OPERATION_H
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include "donor.h"

const std::string FileName = "report.txt";

class System {
public:
    void add_donor (Donor*);
    void add_blood (const BloodType&, double);
    void take_blood (const BloodType&, double);
    void check_quantity ();
    void generate_report ();
    void init();

private:
    std::vector<Donor*> m_donors;
    std::map<BloodType, double> m_blood;
};

#endif //OPERATION_H