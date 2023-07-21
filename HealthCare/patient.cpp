#include "patient.h"

std::string Patient::get_name () const {
    return m_pat_name;
}

std::string Patient::get_date () const {
    return m_birth_date;
}

std::string Patient::get_gender () const {
    return m_pat_gender;
}

std::string Patient::get_cont_info () const {
    return m_pat_cont_info;
}

std::string Patient::get_med_condition () const {
    return m_pat_med_condition;
}

void Patient::set_condition(std::string name) {
    m_exist_cond.push_back(name);
}

void Patient::display_info () {
    std::cout << "Patient's info: " << std::endl;
    std::cout << this->get_name() << std::endl;
    std::cout << this->get_date() << std::endl;
    std::cout << this->get_gender() << std::endl;
    std::cout << this->get_cont_info() << std::endl;
    std::cout << this->get_med_condition() << std::endl;
}
