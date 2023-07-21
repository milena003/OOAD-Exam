#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer {
public:
    Customer () = default;
    Customer (const std::string& name, const std::string& info);

    std::string get_name () const;
    std::string get_info () const;

private:
    std::string m_name;
    std::string m_info;

};

#endif //CUSTOMER_H