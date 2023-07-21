#include "ordering.h"
#include <iostream>

int main() {
    Customer cust("Ann", "ann@gmal.com", "cash");
    Customer cust2("Jon", "jon@gmail.com", "credit card");

    Item i1("pasta", 2500);
    Item i2("pizza", 1500);
    Item i3("sauce", 500);
    Item i4("cola", 1000);
    Item i5("salad", 3000);
    Item i6("sushi", 10000);

    Restursnt restursnt("Monaco", "Northern avenue");
    restursnt.add_menu(&i1);
    restursnt.add_menu(&i2);
    restursnt.add_menu(&i3);
    restursnt.add_menu(&i4);
    restursnt.add_menu(&i5);
    restursnt.add_menu(&i6);
    restursnt.print_menu();
    
    Order order;
    order.add_order(&cust, &i1);
    order.add_order(&cust, &i4);
    order.add_order(&cust2, &i3);
    order.add_order(&cust, &i5);
    std::cout << std::endl;
    std::cout << cust.get_name() << " must pay: " << order.get_order_price(&cust) << std::endl;
    std::cout << cust2.get_name() << " must pay: " << order.get_order_price(&cust2) << std::endl;

    order.save_report(&cust);
    order.save_report(&cust2);

}