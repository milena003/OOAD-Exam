#include "system.h"


void System::add_package (Package* pack) {
    m_packages.push_back(pack);
}

void System::book_package (User* user, int price) {
    for (auto& i : m_packages) {
        if (i->get_price() <= price && i->is_full()) {
            m_booked[user] = i;
            i->set_slot(1);
        }
    }
}

void System::generate_report () {
    std::string name = "system.txt";
    std::ofstream file(name);

    if (file.is_open()) {
        for (auto & it : m_booked) {
            file << "The " << it.second->get_dest() << " package has " << 
            it.second->get_slot() << " slots left" << std::endl;
            file << it.second->get_itinerary() << std::endl;
        }
    }
    file << std::endl;
    file.close();
}