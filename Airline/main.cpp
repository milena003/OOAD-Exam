#include "system.h"

int main () {
    User u1 ("Samuel", "sam@gmai.com");
    User u2("Ashley", "ashley@gmail.com");
    User u3("Dave", "dave@gmail.com");

    Flight f1("FL001" , "Italy", "England", "2023-08-01", 75);
    Flight f2("FL002" , "Spain", "Belgium", "2023-08-07", 100);
    Flight f3("FL003" , "France", "Russia", "2023-08-12", 80);
    Flight f4("FL004" , "Portugal", "Belgium", "2023-08-18", 110);

    System system;
    system.add_flight(&f1);
    system.add_flight(&f2);
    system.add_flight(&f3);
    system.add_flight(&f4);

    system.book_by_date(&u1, "2023-08-07");
    system.book_by_destination(&u2, "England");
    system.book_by_origin(&u3, "Portugal");

    system.save_report();

}