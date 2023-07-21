#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer {
public:
    Customer () = default;
    Customer (const std::string& name, const std::string& info, const std::string& pay);

    std::string get_name () const;
    std::string get_info () const;
    std::string get_type () const;

private:
    std::string m_cust_name;
    std::string m_coust_info;
    std::string m_pay_type;
};

#endif //CUSTOMER_H
