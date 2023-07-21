#include "med_history.h"


void MedHistory::add_doc(Doctor* d) {
    m_docs.push_back(d);
}

void MedHistory::add_patient(Patient* p) {
    m_patients.push_back(p);
}

void MedHistory::set_diagnose_treatment_medication(Patient* p, std::string diagnose, std::string treatment, std::string medication) {
    std::get<0>(m_medication) = p->get_name();
    std::get<1>(m_medication) = diagnose;
    std::get<2>(m_medication) = treatment;
    std::get<3>(m_medication) = medication;    
}

void MedHistory::show() {
    for (auto& it : m_patients) {
        if (it->get_name() == std::get<0>(m_medication)) {
            std::cout << std::get<1>(m_medication) << std::endl;
            std::cout << std::get<2>(m_medication) << std::endl;
            std::cout << std::get<3>(m_medication) << std::endl;
        }
    }
}

std::string MedHistory::get_diagnose() {
    return std::get<1>(m_medication);
}

std::string MedHistory::get_treatment() {
    return std::get<2>(m_medication);
}

std::string MedHistory::get_medication() {
    return std::get<3>(m_medication);
}

void MedHistory::save_report(Patient* pat) {
    std::string fileName = "report.txt";
    std::ofstream file(fileName);

    if (file.is_open()) {
        file << "Patient's info: " << std::endl;
        file << pat->get_name() << std::endl;
        file << pat->get_date() << std::endl;
        file << pat->get_gender() << std::endl;
        file << pat->get_cont_info() << std::endl;
        file << pat->get_med_condition() << std::endl;

        for (auto& it : m_patients) {
            if (pat->get_name() == std::get<0>(m_medication)) {
                file << std::get<1>(m_medication) << std::endl;
                file << std::get<2>(m_medication) << std::endl;
                file << std::get<3>(m_medication) << std::endl;
            }
        }
    }
    else {
        std::cout << "Unable to save report." << std::endl;
    }
    file.close();
}