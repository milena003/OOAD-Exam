#include "recipe.h"


Recipe::Recipe (const std::string& name, std::vector<std::string> ingred, const std::string& instruction) {
    m_name = name;
    m_ingredients = ingred;
    m_instruction = instruction;
}

std::string Recipe::get_name () const {
    return m_name;
}

std::vector<std::string> Recipe::get_ingredients () const {
    return m_ingredients;
}

std::string Recipe::get_instruction () const {
    return m_instruction;
}