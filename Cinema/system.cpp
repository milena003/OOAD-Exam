#include "system.h" 

void System::add_movie (Movie* movie) {
    m_movies.push_back(movie);
}

void System::buy_ticket (User* user, Movie* movie, Ticket* ticket, const std::string& time) {
    for (auto& it : m_movies) {
        if (it->get_title() == movie->get_title()) {
            for (auto& i : m_buy) {
                for (auto& j : movie->get_showtimes()) {
                    if (i.first->get_name() == user->get_name() && j == time) {
                        m_buy[user].push_back(ticket);
                    }
                    else {
                        std::cout << "Unable to book the ticket";
                    }
                }
            }
        }
    }
}

void System::search_movie (Movie* movie) {
    for (auto& it : m_movies) {
        if (movie->get_title() == it->get_title()) {
            std::cout << "Movie: " << movie->get_title() << std::endl;
            std::cout << "Duration: " << movie->get_duration() << std::endl;
            std::cout << "Rating: " << movie->get_rating() << std::endl;
            std::cout << "Showtimes: ";
            for (auto& i : movie->get_showtimes()) {
                std::cout << i << " ";
            }
        }
        else {
            std::cout << "The movie is'nt available" << std::endl;
        }
    }
}

void System::save_report (Movie* movie, User* user) {
    std::string name = movie->get_title() + ".txt";
    std::ofstream file (name);

    if (file.is_open()) {
        file << "Movie: " << movie->get_title() << std::endl;
        file << "Duration: " << movie->get_duration() << std::endl;
        file << "Rating: " << movie->get_rating() << std::endl;
        file << "Showtimes: ";
        for (auto& i : movie->get_showtimes()) {
            file << i << std::endl;
        }
    }
    file << std::endl;
    file.close();
}