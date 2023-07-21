#include "package.h"

Package::Package (const std::string& dest, const std::string& itinerary, double price, int slot) {
    m_destination = dest;
    m_itinerary = itinerary;
    m_price = price;
    m_slot = slot;
}

std::string Package::get_dest () const {
    return m_destination;
}

std::string Package::get_itinerary () const {
    return m_itinerary;
}

double Package::get_price () const {
    return m_price;    
}

int Package::get_slot () const {
    return m_slot;
}

void Package::set_slot (int num) {
    if (this->is_full()) {
        m_slot -= num;
    }
}

bool Package::is_full () {
    if (this->get_slot() == 0) {
        return false;
    }
    return true;
}