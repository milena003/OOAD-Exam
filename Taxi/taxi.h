#ifndef TAXI_H
#define TAXI_H
#include <string>

class Taxi {
public:
    Taxi () = default;
    Taxi (const std::string& num, const std::string& name, const std::string& status, const std::string& t_class);

    bool valid();
    void set_status (const std::string&);
    std::string get_class () const;
    std::string get_status () const;

private:
    std::string m_taxi_number;
    std::string m_driver_name;
    std::string m_status;  //available, booked
    std::string m_class;  //start, comfort, business
};

#endif //TAXI_H
