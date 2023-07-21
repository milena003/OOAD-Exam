#include "ordering.h"


std::string Order::get_status () const {
    return m_status;
}

void Order::update_status (const std::string& status) {
    m_status = status;
}

void Order::add_order (Customer* c, Item* dish) {
    auto it = this->m_orders.find(c);
    if (it == m_orders.end()) {
        this->m_orders.insert({ c, { dish }});
    }
    else {
        m_orders[c].push_back(dish);
    }
}

double Order::get_order_price (Customer* cust) {
    double price = 0.0;
    for (auto& it : m_orders) {
        if (cust->get_name() == it.first->get_name()) {
            for (auto& i : it.second) {
                price += i->get_price();
            }
        }
    }
    return price;
}

void Order::save_report (Customer* cust) {
    std::string fileName = cust->get_name() + ".txt";
    std::ofstream file(fileName);

    if (file.is_open()) {
        file << "Customer " << cust->get_name() << " must pay: " << get_order_price(cust) << std::endl;
        for (auto& it : m_orders) {
            if (cust->get_name() == it.first->get_name()) {
                for (auto& i : it.second) {
                    file << i->get_name() << " costs " << i->get_price() << std::endl;
                }
            }
        }
        file << std::endl;
        file.close();
    }
    else {
        std::cout << "Unable to save report." << std::endl;
    }
}