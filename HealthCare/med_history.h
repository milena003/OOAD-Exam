#ifndef MED_HISTORY
#define MED_HISTORY
#include "patient.h"
#include "doctor.h"
#include <vector>
#include <tuple>
#include <fstream>

class MedHistory {
public:
    void add_doc(Doctor*);
    void add_patient(Patient*);
    
    void save_report(Patient*);

    void set_diagnose_treatment_medication(Patient* , std::string , std::string, std::string);
    void show();
    std::string get_diagnose();
    std::string get_treatment();
    std::string get_medication();

private:
    std::tuple<std::string, std::string, std::string, std::string> m_medication;
    std::vector<Doctor*> m_docs;
    std::vector<Patient*> m_patients;
    
};

#endif //MED_HISTORY