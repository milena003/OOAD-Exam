#include "book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& genre, int quantity, double price) {
    m_title = title;
    m_author = author;
    m_genre = genre;
    m_quantity = quantity;
    m_price = price;
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

int Book::get_quantity () {
    return m_quantity;
}

double Book::get_price() const {
    return m_price;
}

void Book::set_quantity (int number) {
    m_quantity -= number;
}