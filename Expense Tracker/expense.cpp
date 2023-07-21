#include "expense.h"


Expense::Expense (const std::string& category, double amount, const std::string& descr, const std::string& time) {
    m_expense_category = category;
    m_amount = amount;
    m_description = descr;
    m_data_time = time;
}

std::string Expense::get_category () const {
    return m_expense_category;
}

double Expense::get_amount () const {
    return m_amount;
}

std::string Expense::get_description () const {
    return m_description;
}

std::string Expense::get_data_time () const {
    return m_data_time;
}