#include "member.h"


Member::Member(const std::string& name, const std::string& info) {
    m_name = name;
    m_info = info;
}

void Member::borrow_book (Book* book) {
    if (book->is_available()) {
        m_books.push_back(book);
        book->set_status("borrowed");
    }
    else {
        std::cout << "Unable to provide the book" << std::endl;
    }
}

void Member::return_book (Book* book) {
    book->set_status("available");
    auto it = std::find(m_books.begin(), m_books.end(), book);
    if(it != m_books.end()){
        m_books.erase(it);
    }
}

std::string Member::get_name () const {
    return m_name;
}

std::string Member::get_info () const {
    return m_info;
}

std::vector<Book*> Member::get_books () {
    return m_books;
}