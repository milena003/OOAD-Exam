#ifndef DONOR_H
#define DONOR_H
#include <string>

enum class BloodType {
    first_plus = 1,
    second_plus,
    third_plus,
    fourth_plus,
    first_minus,
    second_minus,
    third_minus,
    fourth_minus,
};

class Donor {
public:
    Donor () = default;
    Donor (const std::string& name, const std::string& info, const BloodType& type);

    std::string get_name () const;
    std::string get_info () const;
    BloodType get_type () const;

private:
    std::string m_name;
    std::string m_cont_info;
    BloodType m_blood_type;
};

#endif //DONOR_H
