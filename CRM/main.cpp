#include <iostream>
#include "system.h"

int main () {
    Customer cust1("William", "william@gmail.com");
    Customer cust2("Ann", "ann@gmail.com");
    
    Sale sale("Joe", 1000.0, 12);
    Service warranty_service(sale, "Joe", 50.0);
    Compliant complaint(sale, "Ann", "Product not working properly");

    System system;
    system.add_customer(&cust1);
    system.add_customer(&cust2);

    system.add_interaction(&sale);
    system.add_interaction(&warranty_service);
    system.add_interaction(&complaint);

    system.generate_report(&cust1);

}