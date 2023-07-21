#include "space.h"


Space::Space (int num, const SpaceSize& size, const std::string& status) {
    m_space_number = num;
    m_size = size;
    m_status = status;
}

int Space::get_space_num () const {
    return m_space_number;
}

std::string Space::get_status () const {
    return m_status;
}

SpaceSize Space::get_size () const {
    return m_size;
}

bool Space::is_available () {
    if (get_status() != "available") {
        return false;
    }
    return true;
}

void Space::set_status (const std::string& status) {
    m_status = status;
}