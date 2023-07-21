#include "movie.h"


Movie::Movie (const std::string& title, const std::string& duration, const std::string& rating) {
    m_title = title;
    m_duration = duration;
    m_rating = rating;
}

std::string Movie::get_title () const {
    return m_title;
}

std::string Movie::get_duration () const {
    return m_duration;
}

std::string Movie::get_rating () const {
    return m_rating;
}

std::vector<std::string> Movie::get_showtimes () const {
    return m_showtimes;
}

void Movie::add_showtime (const std::string& show) {
    m_showtimes.push_back(show);
}