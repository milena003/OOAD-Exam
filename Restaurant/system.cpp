#include "system.h"


void System::add_table (Table* table) {
    m_tables.push_back(table);
}

void System::book_table (User* user, int cap) {
    for (auto& it : m_tables) {
        if (it->get_capacity() == cap && it->get_status() == Status::Available) {
            m_reservation[user] = it;
            it->set_status(Status::Booked);
        }
    }
}

void System::save_report() {
    std::string name = "report.txt";
    std::ofstream file(name);

    if (file.is_open()) {
        for (auto& it : m_reservation) {
            file << it.first->get_name() << " booked " << 
            it.second->get_number() << "st table" << std::endl;
        }
    }
    file << std::endl;
    file.close();
}