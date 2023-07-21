#ifndef PATIENT_H
#define PATIENT_H
#include <string>
#include <iostream>
#include <vector>

class Patient {
public:
    Patient () = default;
    Patient (const std::string& name, const std::string& birth_date, const std::string& gender, const std::string& info,
            const std::string& condition) : m_pat_name{name}, m_birth_date{birth_date}, m_pat_gender{gender}, 
            m_pat_cont_info{info}, m_pat_med_condition{condition} {}

    std::string get_name () const;
    std::string get_date () const;
    std::string get_gender () const;
    std::string get_cont_info () const;
    std::string get_med_condition () const;

    void display_info ();
    void set_condition(std::string);

private:
    std::string m_pat_name;
    std::string m_birth_date;
    std::string m_pat_gender;
    std::string m_pat_cont_info;
    std::string m_pat_med_condition;
    std::vector<std::string> m_exist_cond;
};

#endif //PATIENT_H
