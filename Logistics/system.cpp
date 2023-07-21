#include "system.h"


void System::add_user (User* user) {
    m_users.push_back(user);
}

void System::add_item (Item* it) {
    m_items.push_back(it);
}

void System::delivery_status (Item* item) {
    for (auto& it : m_items) {
        if (it->get_name() == item->get_name()) {
            std::cout << "Origin: " << it->get_origin() << std::endl;
            std::cout << "Destination: " << it->get_destination() << std::endl;
            std::cout << "Estimated Delivery Time: " << it->get_time() << std::endl;
            std::cout << "Status: " << it->get_status() << std::endl;
        }
    }
}

void System::update_status (Item* item, const std::string& ststus) {
    for (auto& it : m_items) {
        if (it->get_name() == item->get_name()) {
            it->set_status(ststus);
        }
    }
}

void System::generate_report (Item* item) {
    std::string name = item->get_name() + ".txt";
    std::ofstream file(name);

    if (file.is_open()) {
        file << "Origin: " << item->get_origin() << std::endl;
        file << "Destination: " << item->get_destination() << std::endl;
        file << "Estimated Delivery Time: " << item->get_time() << std::endl;
        file << "Status: " << item->get_status() << std::endl;
    }
    file << std::endl;
    file.close();
}