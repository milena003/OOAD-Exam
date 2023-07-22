#ifndef WARRANT_H
#define WARRANT_H
#include "sale_interaction.h"

class Service : public Interaction {
public:
    Service () = default;
    Service (const Sale& sale, const std::string& user, double cost)
            : Interaction("Warranty Service", user), m_sale(sale), m_cost(cost) {}
    
    const Sale& get_sale () const;
    double get_cost () const;

private:
    Sale m_sale;
    double m_cost;
};

#endif //WARRANT_H