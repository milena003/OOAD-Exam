#include "system.h"


void System::add_flight (Flight* flight) {
    m_flights.push_back(flight);
}

void System::book_by_origin (User* user, const std::string& origin) {
    for (auto& it : m_flights) {
        if (it->get_origin() == origin) {
            m_system[user] = it;
            it->book_seats();
            break;
        }
        // else {
        //     std::cout << "Unable to book a flight" << std::endl;
        // }
    }
}

void System::book_by_destination (User* user, const std::string& dest) {
    for (auto& it : m_flights) {
        if (it->get_destination() == dest) {
            m_system[user] = it;
            it->book_seats();
            break;
        }
        // else {
        //     std::cout << "Unable to book a flight" << std::endl;
        // }
    }
}

void System::book_by_date (User* user, const std::string& date) {
    for (auto& it : m_flights) {
        if (it->get_time() == date) {
            m_system[user] = it;
            it->book_seats();
            break;
        }
        // else {
        //     std::cout << "Unable to book a flight" << std::endl;
        // }
    }
}

void System::save_report () {
    std::string name = "report.txt";
    std::ofstream file (name);

    if (file.is_open()) {
        for (auto & it : m_system) {
            file << it.first->get_name() << " booked this flight:" << std::endl;
            file << it.second->get_flight_num() << std::endl;
            file << it.second->get_origin() << std::endl;
            file << it.second->get_destination() << std::endl;
            file << it.second->get_time() << std::endl;
            file << it.second->get_seats() << " seats are left" << std::endl;
            file << std::endl;
        }
    }
    file.close();
}