#ifndef USER_H
#define USER_H
#include <string>

class User {
public:
    User () = default;
    User (const std::string& name, const std::string& info);

    std::string get_name () const;
    std::string get_info () const;

private:
    std::string m_name;
    std::string m_info;
};

#endif //USER_H