#ifndef SYSTEM_H
#define SYSTEM_H
#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>
#include "user.h"
#include "package.h"

class System {
public:
    void book_package (User*, int);  
    void generate_report ();
    void add_package (Package*);

private:
    std::vector <Package*> m_packages;
    std::unordered_map<User*, Package*> m_booked;
};

#endif //SYSTEM_H
