#ifndef OPERATION_H
#define OPERATION_H
#include <vector>
#include <fstream>
#include "member.h"

class Operation {
public:
    void add_book (Book*);
    void add_member (Member*);

    Book* search_by_title (const std::string&);
    Book* search_by_author (const std::string&);
    Book* search_by_genre (const std::string&);

    void save_report ();

private:    
    std::vector<Book*> m_books;
    std::vector<Member*> m_members;
};

#endif //OPERATION_H