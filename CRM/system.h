#include "compliant.h"
#include "warranty_service.h"
#include "sale_interaction.h"
#include <vector>
#include <fstream>
#include <iostream>

const std::string FileName = "report.txt";

class System {
public:
    void add_customer (Customer*);
    void add_interaction (Interaction*);
    void generate_report (const Customer*);

private:
    std::vector<Customer*> m_customers;
    std::vector<Interaction*> m_interaction;
};