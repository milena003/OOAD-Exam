#include "system.h"

int main() {
    Movie movie1("Avatar", "192 minutes", "10/10");
    movie1.add_showtime("Jul 18");
    movie1.add_showtime("Jul 20");

    User u1("M", "m@gmail.com");

    Ticket t1(&movie1, "Jul 18");

    System system;
    system.add_movie(&movie1);
    system.search_movie(&movie1);
    system.buy_ticket(&u1, &movie1, &t1, "Jul 18");
    system.save_report(&movie1, &u1);
}