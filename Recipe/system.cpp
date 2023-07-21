#include "system.h"


void System::add_recipe (Recipe* res) {
    m_recipes.push_back(res);
}

void System::show_recipe (const std::string& res) {
    for (auto& it : m_recipes) {
        if (it->get_name() == res) {
            for (auto& i : it->get_ingredients()) {
                std::cout << i << ", ";
            }
            std::cout << it->get_instruction() << std::endl;
        }
    }
}

std::string System::search_recipe (const std::vector<std::string>& ingredients) {
    for (const auto& it : m_recipes) {
        const std::vector<std::string>& ingredient = it->get_ingredients();
        if (std::includes(ingredient.begin(), ingredient.end(), ingredients.begin(), ingredients.end())) {
            return it->get_name();
        }
    }
    return "not found";
}

void System::save_recipes() {
    std::ofstream file(RECIPE_FILE);

    if (file.is_open()) {
        for (const auto& it : m_recipes) {
            file << it->get_name() << std::endl;
            for (const auto& ingredient : it->get_ingredients()) {
                file << ingredient << ',';
            }
            file << std::endl;
            file << it->get_instruction() << std::endl;
        }
        file.close();
    }
}