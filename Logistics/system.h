#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <iostream>
#include <fstream>
#include "user.h"
#include "item.h"

class System {
public:
    void add_user (User*);
    void add_item (Item*);

    void update_status (Item*, const std::string&);
    void delivery_status (Item*);
    void generate_report (Item*);

private:
    std::vector<User*> m_users;
    std::vector<Item*> m_items;
};

#endif //SYSTEM_H