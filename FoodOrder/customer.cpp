#include "customer.h"


Customer::Customer (const std::string& name, const std::string& info, const std::string& pay) {
    m_cust_name = name;
    m_coust_info = info;
    m_pay_type = pay;
}

std::string Customer::get_name () const {
    return m_cust_name;
}

std::string Customer::get_info () const {
    return  m_coust_info;
}

std::string Customer::get_type () const {
    return m_pay_type;
}