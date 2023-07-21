#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <ctime>

class Item {
public:
    Item () = default;
    Item (const std::string&, const std::string&, const std::string&, const std::string&);

    std::string get_name () const;
    std::string get_origin () const;
    std::string get_destination () const;
    std::string get_status () const;
    std::string get_time ();

    void set_status (const std::string&);

private:
    std::string m_item_name;
    std::string m_origin;
    std::string m_destination;
    std::string m_status;
    std::string m_delivery_time;
};

#endif //ITEM_H
