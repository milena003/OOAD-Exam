#ifndef MEMBER_H
#define MEMBER_H
#include <vector>
#include <algorithm>
#include <iostream>
#include "book.h"

class Member {
public:
    Member() = default;
    Member(const std::string& name, const std::string& info);

    std::string get_name () const;
    std::string get_info () const;
    std::vector<Book*> get_books ();

    void borrow_book (Book*);
    void return_book (Book*);

private:
    std::string m_name;
    std::string m_info;
    std::vector<Book*> m_books;
};

#endif //MEMBER_H
