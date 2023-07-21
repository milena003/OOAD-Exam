#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>


class Movie {
public:
    Movie () = default;
    Movie (const std::string&, const std::string&, const std::string&);

    std::string get_title () const;
    std::string get_duration () const;
    std::string get_rating () const;
    std::vector<std::string> get_showtimes () const;

    void add_showtime (const std::string&);

private:
    std::string m_title;
    std::string m_duration;
    std::string m_rating;
    std::vector<std::string> m_showtimes;
};

#endif //MOVIE_H