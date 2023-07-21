#include "customer.h"


std::string Customer::get_name() const {
    return m_name;
}

std::string Customer::get_info() const {
    return m_contact_info;
}

double Customer::get_number() const {
    return m_metr_number;
}