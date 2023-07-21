#ifndef SYSTEM_H
#define SYSTEM_H
#include <fstream>
#include <unordered_map>
#include "ticket.h"
#include "user.h"


class System {
public:
    void buy_ticket (User*, Movie*, Ticket*, const std::string& time); 
    void add_movie (Movie*);
    void search_movie (Movie*);
    void save_report (Movie*, User*);

private:
    std::vector<Movie*> m_movies;
    std::unordered_map<User*, std::vector<Ticket*>> m_buy;
};

#endif //SYSTEM_H