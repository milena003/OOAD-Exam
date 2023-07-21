#include "book.h"


Book::Book(const std::string& title, const std::string& author, const std::string& genre, const std::string& status) {
    m_title = title;
    m_author = author;
    m_genre = genre;
    m_status = status;
}

std::string Book::get_title () const {
    return m_title;
}

std::string Book::get_author () const {
    return m_author;
}

std::string Book::get_genre () const {
    return m_genre;
}

std::string Book::get_status () const {
    return m_status;
}

void Book::set_status (const std::string& new_status) {
    m_status = new_status;
}

bool Book::is_available () {
    return m_status == "available" ? true : false;
}