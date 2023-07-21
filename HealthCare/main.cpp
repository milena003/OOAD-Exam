#include <iostream>
#include "med_history.h"

int main() {
    Doctor doc("Ani", "cardiolog", 15, "expert");

    Patient patient("Shia", "18.02.2000", "female", "shia@gmail.com", "felling weak");
    patient.display_info();
    patient.set_condition("getting worse");
    std::cout << std::endl;

    MedHistory med;
    med.add_doc(&doc);
    med.add_patient(&patient);
    med.set_diagnose_treatment_medication(&patient, "getting better", "stay at hospital", "medication");
    med.show();
    med.save_report(&patient);
}
