#include "system.h"
#include <iostream>

void System::add_taxi (Taxi* taxi) {
    m_taxis.push_back(taxi);
}

void System::book(User* const user) {
    for (auto& it : m_taxis) {
        if (it->valid()) {
            m_system[user] = it;
            it->set_status("booked");
            break;
        }
    }
}

double System::price(double distance) {
    double result = 0;
    for (auto& it : m_system) {
        if (it.second->get_status() == "booked") {
            if (it.second->get_class() == "start") {
                result = start_price * distance;   
            }
            else if (it.second->get_class() == "comfort") {
                result = comfort_price * distance;   
            }
            else if (it.second->get_class() == "business") {
                result = business_price * distance;   
            }
        }
    }
    return result;
}

void System::save_report(double num) {
    std::string name = "report.txt";
    std::ofstream file(name);

    if (file.is_open()) {
        for (auto& it : m_system) {
            file << it.first->get_name() << " must pay: " << this->price(num);
        }
    }
    file.close();
}