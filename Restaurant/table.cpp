#include "table.h"


Table::Table (int number, int capacity, const Status& status) {
    m_table_number = number;
    m_capacity = capacity;
    m_status = status;
}

int Table::get_number () const {
    return m_table_number;
}

int Table::get_capacity () const {
    return m_capacity;
}

Status Table::get_status () const {
    return m_status;
}

void Table::set_status (const Status& new_status) {
    m_status = new_status;
}