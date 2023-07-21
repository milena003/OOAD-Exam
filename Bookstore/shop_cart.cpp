#include "shop_cart.h"
#include <iostream>

void Cart::add_book (Customer* cust, Book* book) {
    m_cart[cust].push_back(book);
    book->set_quantity(1);
}

std::vector<Book*> Cart::remove_book (Book* book) {
    std::vector<Book*> new_list;
    for (auto& it : m_cart) {
        for (auto& i : it.second) {
            if (book->get_title() != i->get_title()) {
                new_list.push_back(i);
            }
        }
    }
    return new_list;
}

double Cart::shop_price () {
    double price = 0.0;
    for (auto& it : m_cart) {
        for (auto& i : it.second) {
            price += i->get_price();
        }
    }
    return price;
}

int Cart::taken_count () {
    int count = 0;
    for (auto& it : m_cart) {
        for (auto& i : it.second) {
            count++;
        }
    }
    return count;
}