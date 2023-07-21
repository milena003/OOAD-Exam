#include "system.h"
#include <iostream>

void System::add_member (Member* mem) {
    m_members.push_back(mem);
}

void System::upgrade_level (Member* mem, const Membership& level) {
    mem->set_level(level);
}

void System::downgrade_level (Member* mem, const Membership& level) {
    mem->set_level(level);
}

void System::save_report () {
    std::ofstream file (FileName);

    if (file.is_open()) {
        for (auto& it : m_members) {
            file << it->get_name() << " has ";
            switch (it->get_level()) {
            case Membership::standard:
                file << "standard ";
                break;

            case Membership::premium:
                file << "premium ";
                break;

            case Membership::all_included:
                file << "all included ";
                break;
            }
            file << "level" << std::endl;
            file << "This user has: " << std::endl;
            file << "Fitness: " << it->get_fitness() << " sessions left" << std::endl;
            file << "Pool: " << it->get_pool() << " sessions left" << std::endl;
            file << "Massage: " << it->get_massage() << " sessions left" << std::endl;
            file << std::endl;
        }
    }
    file.close();
}