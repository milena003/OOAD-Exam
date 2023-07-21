#include "user.h"


User::User (const std::string& name, const std::string& info, const std::string& resume) {
    m_name = name;
    m_info = info;
    m_resume = resume;
}

std::string User::get_name () const {
    return m_name;
}

std::string User::get_resume () const {
    return m_resume;
}

std::string User::get_info () const {
    return m_name;
}