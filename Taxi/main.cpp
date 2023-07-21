#include "system.h"
#include <iostream>

int main () {
    User user ("Sam", "phone number");

    Taxi t1("car number", "Mike", "booked", "start");
    Taxi t2("car number", "Jake", "booked", "business");
    Taxi t3("car number", "Dan", "available", "business");
    Taxi t4("car number", "William", "available", "comfort");
    
    System system;
    system.add_taxi(&t1);
    system.add_taxi(&t2);
    system.add_taxi(&t3);
    system.add_taxi(&t4);
    system.book(&user);
    
    double distance = 6.5;
    std::cout << system.price(distance) << std::endl;
    system.save_report(distance);

}
