#include "expense_tracker.h"

int main () {
    Expense exp1("Food", 10.99, "Lunch", "2023-07-12 12:30:00");
    Expense exp2("Transportation", 25.50, "Taxi", "2023-07-13 08:45:00");
    Expense exp3("Shopping", 99.99, "New shoes", "2023-07-14 15:20:00");

    ExpenseTracker tracker;

    tracker.add_expense(&exp1);
    tracker.add_expense(&exp2);
    tracker.add_expense(&exp3);

    tracker.view_expenses();

    tracker.generate_category_summary();
    tracker.save_expenses();
}