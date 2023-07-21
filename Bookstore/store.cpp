#include "store.h"


Store::Store(int count) {
    m_total_count = count;
}

void Store::add_book(Book* book) {
    m_books.push_back(book);
}

int Store::get_total_count () {
    return m_total_count;
}

void Store::set_total_count (Cart* cart) {
    m_total_count = this->get_total_count() - cart->taken_count();
}

void Store::save_report(Cart* cart) {
    std::string fileName = "system.txt";
    std::ofstream file(fileName);

    if (file.is_open()) {
        file << "Total count was: " << this->get_total_count() << std::endl;
        for (auto& it : m_books) {
            file << it->get_title() << ": " << it->get_quantity() << std::endl;
        }
        set_total_count(cart);
        file << "After purchase the count is: " << this->get_total_count() << std::endl;
        file.close();
    }
}