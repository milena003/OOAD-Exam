#include "expense_tracker.h"


void ExpenseTracker::add_expense (Expense* ex) {
    m_expenses.push_back(ex);
}

void ExpenseTracker::view_expenses () {
    if(m_expenses.empty()) {
        std::cout << "No expenses found." << std::endl;
        return;
    }
    std::cout << "All expenses:" << std::endl;
    for(const auto& it : m_expenses) {
        std::cout << "Category: " << it->get_category() << std::endl;
        std::cout << "Amount: $" << it->get_amount() << std::endl;
        std::cout << "Description: " << it->get_description() << std::endl;
        std::cout << "Datetime: " << it->get_data_time() << std::endl;
    }
}

void ExpenseTracker::generate_category_summary () {
    if (m_expenses.empty()) {
        return;
    }
    std::cout << "Category Summaries:" << std::endl;
    std::vector<std::string> categories;

    for(const auto& it : m_expenses) {
        if(std::find(categories.begin(), categories.end(), it->get_category()) == categories.end()) {
            categories.push_back(it->get_category());
        }
    }
    for (const auto& category : categories) {
        double total_amount = 0.0;
        for (const auto& exp: m_expenses) {
            if (exp->get_category() == category) {
                total_amount += exp->get_amount();
            }
        }
        std::cout << "Category: " << category << std::endl;
        std::cout << "Amount: " << total_amount << std::endl;
    }   
}

void ExpenseTracker::save_expenses () {
    std::ofstream file(FileName);
    if (file.is_open()) {
        if(m_expenses.empty()) {
            file << "No expenses found." << std::endl;
            return;
        }
        std::cout << "All expenses:" << std::endl;
        for(const auto& it : m_expenses) {
            file << "Category: " << it->get_category() << std::endl;
            file << "Amount: $" << it->get_amount() << std::endl;
            file << "Description: " << it->get_description() << std::endl;
            file << "Datetime: " << it->get_data_time() << std::endl;
            file << std::endl;
        }
    }
    file.close();
}