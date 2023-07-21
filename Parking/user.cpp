#include "user.h"


User::User (const std::string& name, const SpaceSize& size) {
    m_name = name;
    m_size = size;
}

std::string User::get_name () const {
    return m_name;
}

SpaceSize User::get_size () const {
    return m_size;
}