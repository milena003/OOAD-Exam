#ifndef RECIPE_H
#define RECIPE_H
#include <string>
#include <vector>

class Recipe {
public:
    Recipe () = default;
    Recipe (const std::string&, std::vector<std::string>, const std::string&);

    std::string get_name () const;
    std::vector<std::string> get_ingredients () const;
    std::string get_instruction () const;

private:
    std::string m_name;
    std::vector<std::string> m_ingredients;
    std::string m_instruction;
};

#endif //RECIPE_H