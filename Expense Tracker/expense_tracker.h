#include "expense.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <iostream>

const std::string FileName = "report.txt";

class ExpenseTracker {
public:
    void add_expense (Expense*);
    void view_expenses ();
    void generate_category_summary ();
    void save_expenses ();

private:
    std::vector<Expense*> m_expenses;
};