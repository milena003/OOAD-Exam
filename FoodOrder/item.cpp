#include "item.h"


Item::Item (const std::string& name, double price) {
    m_name = name;
    m_price = price;
}

std::string Item::get_name () const {
    return m_name;
}

double Item::get_price() const {
    return m_price;
}