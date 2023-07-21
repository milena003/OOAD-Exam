#include "flight.h"


Flight::Flight (const std::string& nums, const std::string& orgin, const std::string& dest, const std::string& time, int seats) {
    m_flight_num = nums;
    m_origin = orgin;
    m_destination = dest;
    m_departue_time = time;
    m_valid_seats = seats;
}

std::string Flight::get_flight_num () const {
    return m_flight_num;
}

std::string Flight::get_origin () const {
    return m_origin;
}

std::string Flight::get_destination () const {
    return m_destination;
}

std::string Flight::get_time () const {
    return m_departue_time;
}

int Flight::get_seats () const {
    return m_valid_seats;
}

void Flight::book_seats () {
    if (m_valid_seats > 0) {
        --m_valid_seats;
    }
}