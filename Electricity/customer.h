#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer {
public:
    Customer() = default;
    Customer(const std::string& name, const std::string info, double number) : m_name{name}, m_contact_info{info}, m_metr_number{number} {}

    std::string get_name() const;
    std::string get_info() const;
    double get_number() const;

private:
    std::string m_name;
    std::string m_contact_info;
    double m_metr_number;
};

#endif //CUSTOMER_H