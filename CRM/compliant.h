#ifndef WARRANTY_SERVICE
#define WARRANTY_SERVICE
#include "sale_interaction.h"


class Compliant : public Interaction {
public:
    Compliant () = default;
    Compliant (const Sale& sale, const std::string& user, const std::string& description)
            : Interaction("Compliant", user), m_sale(sale), m_description(description) {}
    
    const Sale& get_sale() const;
    std::string get_description() const;
    
private:
    Sale m_sale;
    std::string m_description;
};

#endif //WARRANTY_SERVICE