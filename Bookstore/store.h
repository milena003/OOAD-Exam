#ifndef STORE_H
#define STORE_H
#include "shop_cart.h"
#include <fstream>

class Store {
public:
    Store() = default;
    Store(int count);

    int get_total_count ();
    void set_total_count (Cart*);

    void add_book(Book*);
    void save_report(Cart*);

private:
    int m_total_count;
    std::vector <Book*> m_books;
};

#endif //STORE_H