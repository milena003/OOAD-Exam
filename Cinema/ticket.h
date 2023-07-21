#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include "movie.h"


class Ticket {
public:
    Ticket () = default;
    Ticket (const Movie* movie, const std::string&);

    void print_ticket ();

private:
    const Movie* m_movie;
    std::string m_showtime;
    std::string m_seats;
};

#endif //TICKET_H