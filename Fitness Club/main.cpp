#include "system.h"
#include <iostream>

int main () {
    Member mem1("Lilith", "lilith@gmail.com", Membership::premium);
    Member mem2("Jane", "jane@gmail.com", Membership::standard);

    mem1.enters_fitness();
    mem1.enters_pool();
    mem1.enters_pool();
    mem1.enters_pool();

    mem2.enters_massage();
    mem2.enters_fitness();
    mem2.enters_pool();

    System system;
    system.add_member(&mem1);
    system.add_member(&mem2);
    system.upgrade_level(&mem2, Membership::premium);

    system.save_report();
}