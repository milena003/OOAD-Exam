#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>

class Expense {
public:
    Expense () = default;
    Expense (const std::string&, double, const std::string&, const std::string&);

    std::string get_category () const;
    double get_amount () const;
    std::string get_description () const;
    std::string get_data_time () const;

private:
    std::string m_expense_category;
    double m_amount;
    std::string m_description;
    std::string m_data_time;
};

#endif //EXPENSE_H