#include "system.h"

int main () {
    Recipe recipe1("Pasta", { "Pasta", "Tomato Sauce", "Cheese" }, "1. Cook pasta. 2. Heat tomato sauce. 3. Combine pasta, sauce, and cheese.");
    Recipe recipe2("Salad", { "Lettuce", "Tomatoes", "Cucumber" }, "1. Chop lettuce, tomatoes, and cucumber. 2. Mix them together.");

    System system;
    system.add_recipe(&recipe1);
    system.add_recipe(&recipe2);

    std::vector<std::string> find = {"Tomatoes"};
    std::string res = system.search_recipe(find);
    std::cout << res << std::endl;
    system.show_recipe(res);
    system.save_recipes();

}