#ifndef ORDERING_H
#define ORDERING_H
#include <unordered_map>
#include <fstream>
#include "customer.h"
#include "resturant.h"

class Order {
public:
    Order() = default;
    
    std::string get_status () const;

    void save_report (Customer*);
    double get_order_price (Customer*);
    void add_order (Customer*, Item*);
    void update_status (const std::string&);

private:
    std::unordered_map<Customer*, std::vector<Item*>> m_orders;
    std::string m_status;
};

#endif //ORDERING_H