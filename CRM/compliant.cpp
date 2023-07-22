#include "compliant.h"

const Sale& Compliant::get_sale() const {
    return m_sale;
}

std::string Compliant::get_description() const {
    return m_description;
}