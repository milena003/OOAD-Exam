#include "system.h"


int main () {
    User user1("Katelyn", "kate@gmail.com");
    User user2("Jofery", "jof@gmail.com");

    Package pack1("Paris", "Day 1: Eiffel Tower, Day 2: Louvre Museum", 2500, 100);
    Package pack2("Madrid", "Day 1: Prado Museum, Day 2: Park Del Retiro", 3000, 70);
    


    System system;
    system.add_package(&pack1);
    system.add_package(&pack2);

    system.book_package(&user1, 2500);
    system.book_package(&user2, 20000);

    system.generate_report();
}