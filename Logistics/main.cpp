#include "system.h"

int main () {
    User u1("Sally", "sally@gmail.com");
    User u2("Haley", "haley@gmail.com");

    System system;
    system.add_user(&u1);
    system.add_user(&u2);

    Item i1("item1", "A", "B", "15:24");
    Item i2("item2", "C", "D", "2:06");

    system.add_item(&i1);
    system.add_item(&i2);

    system.update_status(&i1, "pending");
    system.update_status(&i2, "delivvered");

    system.generate_report(&i1);   
    system.generate_report(&i2);
}