#include "generatebill.h"

void Generate::save_report(Customer* cust, Bill* bill) {
    std::string fileName = cust->get_name() + "_" + ".txt";
    std::ofstream file(fileName);

    if(file.is_open()) {
        for(const auto& it : m_bills) {
            file << "Customer: " << cust->get_name() << " must pay: " << it << std::endl;
        }
        file << std::endl;
        
        std::cout << "Report saved to file: " << fileName << std::endl;
        file.close();
    }
    else {
        std::cout << "Unable to save report." << std::endl;
    }
}