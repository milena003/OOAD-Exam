#include "taxi.h"


Taxi::Taxi (const std::string& num, const std::string& name, const std::string& status, const std::string& t_class) {
    m_taxi_number = num;
    m_driver_name = name;
    m_status = status;
    m_class = t_class;
}

bool Taxi::valid() {
    return m_status == "booked" ? false : true;
}

void Taxi::set_status (const std::string& stat) {
    m_status = stat;
}

std::string Taxi::get_class () const {
    return m_class;
}

std::string Taxi::get_status () const {
    return m_status;
}