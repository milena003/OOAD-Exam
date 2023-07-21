#ifndef SYSTEM_H
#define SYSTEM_H
#include "table.h"
#include "user.h"
#include <vector>
#include <fstream>
#include <map>

class System {
public:
    void add_table (Table*);
    void book_table (User*, int);
    void save_report();

private:    
    std::vector <Table*> m_tables;
    std::map<User*, Table*> m_reservation;
};

#endif //SYSTEM_H