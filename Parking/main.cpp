#include "system.h"

int main () {
    User u1("Sam", SpaceSize::Compact);
    User u2("James", SpaceSize::Large);

    Space s1(5, SpaceSize::Compact, "available");
    Space s2(10, SpaceSize::Regular, "available");
    Space s3(17, SpaceSize::Regular, "available");
    Space s4(21, SpaceSize::Large, "occupied");
    Space s5(22, SpaceSize::Large, "available");

    System system;
    system.add_space(&s1);
    system.add_space(&s2);
    system.add_space(&s3);
    system.add_space(&s4);
    system.add_space(&s5);

    system.book_space(&u1);
    system.book_space(&u2);

    system.calculate_price(SpaceSize::Compact, 3);
    system.calculate_price(SpaceSize::Large, 10);
    
    system.save_report();

}