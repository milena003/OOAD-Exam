#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
public:
    Book() = default;
    Book(const std::string& title, const std::string& author, const std::string& genre, const std::string& status);

    std::string get_title () const;
    std::string get_author () const;
    std::string get_genre () const;
    std::string get_status () const;
    
    void set_status (const std::string&);
    bool is_available ();

private:
    std::string m_title;
    std::string m_author;
    std::string m_genre;
    std::string m_status;
};

#endif //BOOK_H
