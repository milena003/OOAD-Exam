#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>


class Flight {
public:
    Flight () = default;
    Flight (const std::string&, const std::string&, const std::string&, const std::string&, int);

    std::string get_flight_num () const;
    std::string get_origin () const;
    std::string get_destination () const;
    std::string get_time () const;
    int get_seats () const;
    void book_seats ();

private:
    std::string m_flight_num;
    std::string m_origin;
    std::string m_destination;
    std::string m_departue_time;
    int m_valid_seats;
};

#endif //FLIGHT_H