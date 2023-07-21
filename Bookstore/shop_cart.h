#ifndef SHOP_CART_H
#define SHOP_CART_H
#include <unordered_map>
#include <vector>
#include "customer.h"
#include "book.h"

class Cart {
public:
    void add_book (Customer*, Book*);
    std::vector<Book*> remove_book (Book*);
    double shop_price ();
    int taken_count ();

private:
    std::unordered_map<Customer*, std::vector<Book*>> m_cart;
};

#endif //SHOP_CART_H