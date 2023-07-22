#include "warranty_service.h"


const Sale& Service::get_sale () const {
    return m_sale;
}

double Service::get_cost () const {
    return m_cost;
}