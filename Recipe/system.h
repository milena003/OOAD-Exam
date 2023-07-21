#ifndef SYSTEM_H
#define SYSTEM_H
#include "recipe.h"
#include <algorithm>
#include <iostream>
#include <fstream>

const std::string RECIPE_FILE = "recipes.txt";

class System {
public:
    void add_recipe (Recipe*);
    void show_recipe (const std::string&);
    std::string search_recipe (const std::vector<std::string>&);
    void save_recipes();

private:
    std::vector<Recipe*> m_recipes;
};

#endif //SYSTEM_H