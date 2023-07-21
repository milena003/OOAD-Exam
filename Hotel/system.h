#ifndef SYSTEM_H
#define SYSTEM_H
#include "customer.h"
#include "room.h"
#include <vector>
#include <fstream>
#include <map>
#include <iostream>

const double single = 2.0;
const double duble = 4.0;
const double suite = 5.0;

class System {
public:
    void add_room (Room*);
    void book_room (Customer*, const RoomType&);
    double generate_bill (Customer*);
    void report ();

private:
    std::vector <Room*> m_rooms;
    std::map<Customer*, Room*> m_booking;
};

#endif //SYSTEM_H