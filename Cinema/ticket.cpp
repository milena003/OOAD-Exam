#include "ticket.h"


Ticket::Ticket (const Movie* movie, const std::string& showtime) {
    m_movie = movie;
    m_showtime = showtime;
}

void Ticket::print_ticket () {
    std::cout << "Movie: " << m_movie->get_title() << std::endl;
    std::cout << "Show time: " << m_showtime;
    std::cout << "Seat numbers: " << m_seats;
}