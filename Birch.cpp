#include "Birch.h"

unsigned int Birch::_birch_counter = 0;

Birch::Birch(std::string name_create)
    : Tree(name_create, tree_type_birch)
{
    ++_birch_counter;
}

Birch::Birch(const Birch& birch_to_copy)
    : Tree(birch_to_copy)
{
    ++_birch_counter;
}

void Birch::wind() {
    std::cout << "Tree name : " << getName() << "\n" << "Tree type : Birch \n";
}

unsigned int Birch::getBirchCount() {
    return _birch_counter;

}
