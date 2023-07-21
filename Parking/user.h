#ifndef USER_H
#define USER_H
#include "space.h"

class User {
public:
    User () = default;
    User (const std::string&, const SpaceSize&); 

    std::string get_name () const;
    SpaceSize get_size () const;

private:
    std::string m_name;
    SpaceSize m_size;
};

#endif //USER_H
