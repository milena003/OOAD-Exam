#include "customer.h"


Customer::Customer (const std::string& name, const std::string& info) {
    m_name = name;
    m_info = info;
}

std::string Customer::get_name () const {
    return m_name;
}

std::string Customer::get_info () const {
    return m_info;
}