#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item {
public:
    Item() = default;
    Item (const std::string& name, double price);

    std::string get_name () const;
    double get_price() const;

private:
    std::string m_name;
    double m_price;
};

#endif //ITEM_H