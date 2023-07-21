#include "room.h"


Room::Room (int number, const RoomType& type, const Valid& status) {
    m_number = number;
    m_type = type;
    m_status = status;
}

int Room::get_room_number () const {
    return m_number;
}

RoomType Room::get_room_type () const {
    return m_type;
}

Valid Room::get_status () const {
    return m_status;
}

void Room::set_status (const Valid& status) {
    m_status = status;
}