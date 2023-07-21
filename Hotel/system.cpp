#include "system.h"


void System::add_room (Room* room) {
    m_rooms.push_back(room);
}

void System::book_room (Customer* cust, const RoomType& type) {
    for (auto& i : m_rooms) {
        if (i->get_status() == Valid::Available && i->get_room_type() == type) {
            m_booking[cust] = i;
            i->set_status(Valid::Booked);
            break;
        }
    }
}

double System::generate_bill (Customer* cust) {
    double fee = 0.0;
    for (auto& i : m_booking) {
        if (i.first->get_name() == cust->get_name()) {
            switch (i.second->get_room_type()) {
            case RoomType::Single:
                fee = single;
                break;
            case RoomType::Double:
                fee = duble;
                break;
            case RoomType::Suite:
                fee = suite;
                break;
            }
        }
    }
    return fee;
}

void System::report () {
    std::string name = "report.txt";
    std::ofstream file (name);

    if (file.is_open()) {
        for (auto& it : m_booking) {
            file << it.first->get_name() << " must pay " << generate_bill(it.first) << "$ for the " 
            << it.second->get_room_number() << "st room" << std::endl;
        }
    }
    file.close();
}