#include "user.h"


User::User (const std::string& name, const std::string& info) {
    m_name = name;
    m_info = info;
}

std::string User::get_name () const {
    return m_name;
}