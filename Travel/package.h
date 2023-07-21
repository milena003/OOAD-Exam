#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>

class Package {
public:
    Package () = default;
    Package (const std::string&, const std::string&, double, int);

    std::string get_dest () const;
    std::string get_itinerary () const;
    double get_price () const;
    int get_slot () const;

    bool is_full ();
    void set_slot (int);

private:
    std::string m_destination;
    std::string m_itinerary;
    double m_price;
    int m_slot;
};

#endif //PACKAGE_H
