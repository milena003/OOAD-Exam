#ifndef MEMBER_H
#define MEMBER_H
#include <string>

enum class Membership {
    standard,
    premium, 
    all_included
};

class Member {
public:
    Member () = default;
    Member (const std::string&, const std::string&, Membership);

    std::string get_name () const;
    std::string get_info () const;
    Membership get_level () const;
    void set_level(const Membership&);

    int get_fitness () const;
    int get_pool () const;
    int get_massage () const;

    int enters_fitness ();
    int enters_pool ();
    int enters_massage ();
    
private:
    std::string m_name;
    std::string m_info;
    Membership m_membership; 
    int m_entries_fitness = 12;
    int m_entries_pool = 6;
    int m_entries_massage = 1;
};

#endif //MEMBER_H