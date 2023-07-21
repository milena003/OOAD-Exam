#include "donor.h"


Donor::Donor (const std::string& name, const std::string& info, const BloodType& type) {
    m_name = name;
    m_cont_info = info;
    m_blood_type = type;
}

std::string Donor::get_name () const {
    return m_name;
}

std::string Donor::get_info () const {
    return m_cont_info;
}

BloodType Donor::get_type () const {
    return m_blood_type;
}