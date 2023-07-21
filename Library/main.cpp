#include "operations.h"


int main () {
    Book book1("Idiot", "Tolstoy", "drama", "available");
    Book book2("3 friends", "Remark", "drama", "available");
    Book book3("Hideway", "Douglas", "drama", "available");

    Member member1("Sarah", "sarah@gmail.com");
    Member member2("Ann", "ann@gmail.com");

    member1.borrow_book(&book1);
    member1.borrow_book(&book3);
    member2.borrow_book(&book1);

    Operation operation; 
    operation.add_book(&book1);    
    operation.add_book(&book2);
    operation.add_book(&book3);

    operation.add_member(&member1);
    operation.add_member(&member2);

    operation.save_report();
}