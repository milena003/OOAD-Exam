#include "system.h"

int main () {
    User u1("Kate", "kate@gmail.com");
    User u2("Ann", "ann@gmail.com");

    Table t1(10, 4, Status::Booked);
    Table t2(11, 2, Status::Available);
    Table t3(12, 5, Status::Available);
    Table t4(13, 10, Status::Available);
    Table t5(14, 4, Status::Available);

    System system;
    system.add_table(&t1);
    system.add_table(&t2);
    system.add_table(&t3);
    system.add_table(&t4);
    system.add_table(&t5);

    system.book_table(&u1, 4);
    system.book_table(&u2, 5);

    system.save_report();
}
