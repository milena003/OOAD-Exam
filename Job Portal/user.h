#ifndef USER_H
#define USER_H
#include <string>

class User {
public:
    User () = default;
    User (const std::string&, const std::string&, const std::string&);

    std::string get_name () const;
    std::string get_info () const; 
    std::string get_resume () const;

private:
    std::string m_name;
    std::string m_info;
    std::string m_resume;
};

#endif //USER_H
