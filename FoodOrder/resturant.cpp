#include "resturant.h"


Restursnt::Restursnt (const std::string& name, const std::string& location) {
    m_name = name;
    m_location = location;
}

std::string Restursnt::get_name () const {
    return m_name;
}

std::string Restursnt::get_location () const {
    return m_location;
}

void Restursnt::add_menu (Item* dish) {
    m_menu.push_back(dish);   
}

void Restursnt::print_menu () {
    for (auto& it : m_menu) {
        std::cout << it->get_name() << " costs: " << it->get_price() << std::endl;
    }
}