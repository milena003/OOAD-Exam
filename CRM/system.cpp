#include "system.h"


void System::add_customer (Customer* cust) {
    m_customers.push_back(cust);
}

void System::add_interaction (Interaction* inter) {
    m_interaction.push_back(inter); 
}

void System::generate_report (const Customer* cust) {
    std::ofstream file (FileName);
    
    if (file.is_open()) {
        for (auto& it : m_interaction) {
            if (it->get_customer() == cust->get_name()) {
                file << "Customer information" << std::endl;
                file << "Customer's name: " << cust->get_name() << std::endl;
                file << "Customer's info: " << cust->get_info() << std::endl;
                file << std::endl;
                
                file << "Interaction history " << std::endl;
                file << "Interaction type: " << it->get_type() << std::endl;
                file << "Interaction Date: " << it->get_date() << std::endl;
                if(it->get_type() == "Sale") {
                    Sale* sale = static_cast<Sale*>(it);
                    file << "Amount: " << sale->get_amount() << "$" << std::endl;
                    file << "Warranty Period: " << sale->get_period() << std::endl;
                } 

                else if(it->get_type() == "Warranty Service") {
                    Service* warranty_sale = static_cast<Service*>(it);
                    Sale sale = warranty_sale->get_sale();
                    file << "Service Cost: " << warranty_sale->get_cost() << "$" << std::endl;
                    file << "Sale Interaction - Amount: " << sale.get_amount() << "$" << std::endl;
                    file << "Sale Interaction - Warranty Period: " << sale.get_period() << std::endl;
                }

                else if(it->get_type() == "Complaint") {
                    Compliant* complaint = static_cast<Compliant*>(it);
                    Sale sale = complaint->get_sale();
                    file << "Description: " << complaint->get_description() << std::endl;
                    file << "Sale Interaction - Amount: " << sale.get_amount() << "$" << std::endl;
                    file << "Sale Interaction - Warranty Period: " << sale.get_period() << " months" << std::endl;
                }
            }
        }
    }
    file.close();
}