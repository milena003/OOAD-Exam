#include "operations.h"


void Operation::add_book (Book* book) {
    m_books.push_back(book);
}

void Operation::add_member (Member* member) {
    m_members.push_back(member);
}


Book* Operation::search_by_title (const std::string& title) {
    for (auto& i : m_books) {
        if (i->get_title() == title) {
            return i;
        }
    }
    return nullptr;
}

Book* Operation::search_by_author (const std::string& author) {
    for (auto& i : m_books) {
        if (i->get_author() == author) {
            return i;
        }
    }
    return nullptr;
}

Book* Operation::search_by_genre (const std::string& genre) {
    for (auto& i : m_books) {
        if (i->get_author() == genre) {
            return i;
        }
    }
    return nullptr;
}


void Operation::save_report () {
    std::string name = "report.txt";
    std::ofstream file(name);

    if (file.is_open()) {
        for (auto& i : m_members) {
            file << i->get_name() << " took ";
            for (auto& j : i->get_books()) {
                file << j->get_title() << " ";
            }
            file << "books" << std::endl;
        }
    }
    file << std::endl;
    file.close();
}