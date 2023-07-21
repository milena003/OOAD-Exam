#include "operation.h"

void System::add_donor (Donor* donor) {
    m_donors.push_back(donor);
}

void System::add_blood (const BloodType& type, double quantity) {
    m_blood[type] += quantity;
    std::cout << m_blood[type] << std::endl;
}

void System::take_blood (const BloodType& type, double quantity) {
    if (m_blood[type] >= quantity) {
        m_blood[type] -= quantity;
    }
}

void System::check_quantity() {
    for (const auto& it : m_blood) {
        switch (it.first) {
            case BloodType::first_plus:
                if (it.second < 500.0) {
                    std::cout << "First+: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::first_minus:
                if (it.second < 500.0) {
                    std::cout << "First-: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::second_plus:
                if (it.second < 500.0) {
                    std::cout << "Second+: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::second_minus:
                if (it.second < 500.0) {
                    std::cout << "Second-: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::third_plus:
                if (it.second < 500.0) {
                    std::cout << "Third+: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::third_minus:
                if (it.second < 500.0) {
                    std::cout << "Third-: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::fourth_plus:
                if (it.second < 500.0) {
                    std::cout << "Fourth+: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
            case BloodType::fourth_minus:
                if (it.second < 500.0) {
                    std::cout << "Fourth-: ";
                    std::cout << it.second << " ml is left" << std::endl;
                }
                break;
        }
    }
}

void System::generate_report () {
    std::ofstream file (FileName);

    if (file.is_open()) {
        for (auto& it : m_blood) {
            switch (it.first) {
                case BloodType::first_plus:
                    file << "First+: ";
                    break;
                case BloodType::first_minus:
                    file << "First-: ";
                    break;
                case BloodType::second_plus:
                    file << "Second+: ";
                    break;
                case BloodType::second_minus:
                    file << "Second-: ";
                    break;
                case BloodType::third_plus:
                    file << "Third+: ";
                    break;
                case BloodType::third_minus:
                    file << "Third-: ";
                    break;
                case BloodType::fourth_plus:
                    file << "Fourth+: ";
                    break;
                case BloodType::fourth_minus:
                    file << "Fourth-: ";
                    break;
            }    
            file << it.second << "ml is left" << std::endl;;
        }
    }
    file.close();
}

void System::init() {
    this->m_blood[BloodType::first_plus] = 1000.0;
    this->m_blood[BloodType::first_minus] = 700.0;
    this->m_blood[BloodType::second_plus] = 1700.0;
    this->m_blood[BloodType::second_minus] = 520.0;
    this->m_blood[BloodType::third_plus] = 1500.0;
    this->m_blood[BloodType::third_minus] = 900.0;
    this->m_blood[BloodType::fourth_plus] = 1040.0;
    this->m_blood[BloodType::fourth_minus] = 160.0;    
}