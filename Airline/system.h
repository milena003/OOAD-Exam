#ifndef SYSTEM_H
#define SYSTEM_H
#include "user.h"
#include "flight.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <map>

class System {
public:
    void add_flight (Flight*);
    void book_by_origin (User*, const std::string&);
    void book_by_destination (User*, const std::string&);
    void book_by_date (User*, const std::string&);

    void save_report ();
    
private:
    std::vector<Flight*> m_flights;
    std::map<User*, Flight*> m_system;
};

#endif //SYSTEM_H