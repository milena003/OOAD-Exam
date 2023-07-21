#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
public:
    Book() = default;
    Book(const std::string& title, const std::string& author, const std::string& genre, int quantity, double price);

    std::string get_title () const;
    std::string get_author () const;
    std::string get_genre () const;
    int get_quantity ();
    double get_price() const;
    void set_quantity (int);

private:
    std::string m_title;
    std::string m_author;
    std::string m_genre;
    int m_quantity;
    double m_price;
};

#endif //BOOK_H
