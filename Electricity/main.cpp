#include "generatebill.h"
#include <iostream>

int main () {
    Customer cust("Am", "info", 100);
    
    Consumption cons;
    cons.add_consuption(&cust, 250.85);
    cons.add_consuption(&cust, 750);
    cons.summary(&cust);

    Bill bill;
    bill.set_rate(1.5);
    double bil = bill.bill_count(cons, &cust);
    std::cout << bil << std::endl;
    double res = bill.calculate(cons, &cust);
    std::cout << "For " << cust.get_name() << " the bill is: " << res << std::endl;

    Generate gen;
    gen.set_bills(cons, &cust, &bill);
    gen.save_report(&cust, &bill);
}