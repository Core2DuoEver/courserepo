#include "Pine.h"

unsigned int Pine::_pine_counter = 0;

Pine::Pine(std::string name_create)
    : Tree(name_create, tree_type_pine)
{
    ++_pine_counter;
}

Pine::Pine(const Pine& oak_to_copy)
    : Tree(oak_to_copy)
{
    ++_pine_counter;
}

void Pine::wind() {
    std::cout << "Tree name : " << getName() << "\n" << "Tree type : Pine \n";
}

// —татический метод дл€ получени€ количества дубов
unsigned int Pine::getPineCount() {
    return _pine_counter;
}