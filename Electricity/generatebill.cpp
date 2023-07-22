#include "generatebill.h"


void Generate::set_bills (Consumption& cost, Customer* c, Bill* bill) {
    m_bills.push_back(bill->calculate(cost, c));
}

void Generate::save_report(Customer* cust, Bill* bill) {
    std::string fileName = cust->get_name() + file_end;
    std::ofstream file(fileName);

    if(file.is_open()) {
        for(const auto& it : m_bills) {
            file << "Customer: " << cust->get_name() << " must pay: " << it << std::endl;
        }
        file << std::endl;
        file.close();
    }
    else {
        std::cout << "Unable to save report." << std::endl;
    }
}