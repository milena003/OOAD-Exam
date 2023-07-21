#include  "member.h"

Member::Member (const std::string& name, const std::string& info, Membership membership) {
    m_name = name;
    m_info = info;
    switch (membership) {
    case Membership::standard: 
        m_entries_fitness *= 1;
        m_entries_pool *= 1;
        m_entries_massage *= 1;
        break;
    
    case Membership::premium: 
        m_entries_fitness *= 2;
        m_entries_pool *= 2;
        m_entries_massage *= 2;
        break;
    
    case Membership::all_included: 
        m_entries_fitness *= 3;
        m_entries_pool *= 3;
        m_entries_massage *= 3;
        break;
    }
}

std::string Member::get_name () const {
    return m_name;
}

std::string Member::get_info () const {
    return m_info;    
}

Membership Member::get_level () const {
    return m_membership;
}

void Member::set_level(const Membership& level) {
    m_membership = level;
}

int Member::get_fitness () const {
    return m_entries_fitness;
}

int Member::get_pool () const {
    return m_entries_pool;
}

int Member::get_massage () const {
    return m_entries_massage;
}

int Member::enters_fitness () {
    return m_entries_fitness > 0 ? --m_entries_fitness : 0; 
}

int Member::enters_pool () {
    return m_entries_pool > 0 ? --m_entries_pool : 0;  
}

int Member::enters_massage () {
    return m_entries_massage > 0 ? --m_entries_massage : 0;
}