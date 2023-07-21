#ifndef SYSTEM_H
#define SYSTEM_H
#include "user.h"
#include <vector>
#include <fstream>
#include <map>


const double compact = 5.0;
const double regular = 7.0;
const double large = 10.0;

class System {
public:
    void add_space (Space*);
    void book_space(User*);
    double calculate_price (const SpaceSize&, int);

    void save_report ();
private:
    std::vector<Space*> m_space;
    std::map<User*, Space*> m_reservation;
};

#endif //SYSTEM_H