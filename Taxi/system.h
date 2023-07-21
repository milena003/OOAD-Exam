#ifndef SYSTEM_H
#define SYSTEM_H
#include <map>
#include <fstream>
#include <vector>
#include "taxi.h"
#include "user.h"

const int start_price = 1;
const int comfort_price = 1.8;
const int business_price = 3;


class System {
public:
    void book(User*);
    double price(double);
    void save_report(double);
    void add_taxi (Taxi*);

private:
    std::vector<Taxi*> m_taxis;
    std::map<User*, Taxi*> m_system;
};

#endif //SYSTEM_H