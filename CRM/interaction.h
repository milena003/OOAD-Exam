#ifndef INTERACTION_H
#define INTERACTION_H
#include "customer.h"

class Interaction {
public:
    Interaction () = default;
    Interaction(const std::string& type, const std::string& cust);

    std::string get_type () const;
    std::string get_date() const;
    std::string get_customer () const;

protected:
    std::string m_interaction_type;
    time_t m_time;
    std::string m_customer;
};

#endif //INTERACTION_H