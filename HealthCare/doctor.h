#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

class Doctor {
public:
    Doctor () = default;
    Doctor (const std::string& name, const std::string& specalization, int year, const std::string& info) : 
            m_doc_name{name}, m_doc_specalization{specalization}, m_doc_year{year}, m_doc_cont_info{info} {}

    std::string get_name () const;

private:
    std::string m_doc_name;
    std::string m_doc_specalization;
    int m_doc_year;
    std::string m_doc_cont_info;
};

#endif //DOCTOR_H
