#include "item.h"


Item::Item (const std::string& name ,const std::string& origin, const std::string& dest, const std::string& time) {
    m_item_name = name;
    m_origin = origin;
    m_destination = dest;
    m_delivery_time = time;
}

std::string Item::get_name () const {
    return m_item_name;
}

std::string Item::get_time () {
    return m_delivery_time;
}

std::string Item::get_status () const {
    return m_status;
}

std::string Item::get_origin () const {
    return m_origin;
}

std::string Item::get_destination () const {
    return m_destination;
}

void Item::set_status (const std::string& status) {
    m_status = status;
}