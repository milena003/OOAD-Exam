#include "operation.h"

int main () {
    Donor don1("Emm", "emm@gmail.com", BloodType::fourth_plus);
    Donor don2("Gilbert", "gillgmail.com", BloodType::second_minus);
    Donor don3("Selena", "selenagmail.com", BloodType::third_plus);

    System system;
    system.add_donor(&don1);
    system.add_donor(&don2);
    system.add_donor(&don3);

    system.init();
    system.add_blood(BloodType::second_minus, 300.0);
    system.take_blood(BloodType::first_plus, 500.0);
    system.check_quantity();
    system.generate_report();
}