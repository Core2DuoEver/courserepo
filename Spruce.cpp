#include "Spruce.h"

unsigned int Spruce::_spruce_counter = 0;

Spruce::Spruce(std::string name_create)
    : Tree(name_create, tree_type_spruce)
{
    ++_spruce_counter;
}

Spruce::Spruce(const Spruce& spruce_to_copy)
    : Tree(spruce_to_copy)
{
    ++_spruce_counter;
}

void Spruce::wind() {
    std::cout << "Tree name : " << getName() << "\n" << "Tree type : Spruce \n";
}

unsigned int Spruce::getSpruceCount() {
    return _spruce_counter;

}
