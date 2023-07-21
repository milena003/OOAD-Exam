#ifndef RESTURANT_H
#define RESTURANT_H
#include <vector>
#include <iostream>
#include "item.h"

class Restursnt {
public:
    Restursnt () = default;
    Restursnt (const std::string& name, const std::string& location);

    std::string get_name () const;
    std::string get_location () const;
    
    void print_menu ();
    void add_menu (Item*);

private:
    std::string m_name;
    std::vector<Item*> m_menu;
    std::string m_location;
};

#endif //RESTURANT_H
