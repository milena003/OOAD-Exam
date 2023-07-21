#include "store.h"
#include <iostream>

int main () {
    Book book1("Mara & morok", "Arden", "fantacy", 50, 5000);
    Book book2("Hideway", "Douglas", "drama", 80, 7500);
    
    Customer cust("Kate", "kate@gmail.com");
    
    Cart cart;
    cart.add_book(&cust, &book1);
    cart.add_book(&cust, &book2);
    std::cout << cust.get_name() << "'s book price is: " << cart.shop_price() << std::endl;
    
    Store store(130);
    store.add_book(&book1);
    store.add_book(&book2);
    
    store.save_report(&cart);

}