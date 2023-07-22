#include "interaction.h"


Interaction::Interaction(const std::string& type, const std::string& cust) {
    m_interaction_type = type;
    m_time = time(nullptr);
    m_customer = cust;
}

std::string Interaction::get_type () const {
    return m_interaction_type;
}

std::string Interaction::get_date() const {
    return std::string(ctime(&m_time));
}

std::string Interaction::get_customer () const {
    return m_customer;
}