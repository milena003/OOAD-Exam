#include "system.h"

int main () {
    Customer c1("Lika", "lika@gmail.com");
    Customer c2("Sally", "sally@gmail.com");

    Room r1(10, RoomType::Single, Valid::Available);
    Room r2(17, RoomType::Double, Valid::Booked);
    Room r3(22, RoomType::Suite, Valid::Available);
    Room r4(73, RoomType::Double, Valid::Available);
    Room r5(84, RoomType::Single, Valid::Available);

    System system;
    system.add_room(&r1);
    system.add_room(&r2);
    system.add_room(&r3);
    system.add_room(&r4);
    system.add_room(&r5);

    system.book_room(&c1, RoomType::Double);
    system.book_room(&c2, RoomType::Suite);

    system.report();
}