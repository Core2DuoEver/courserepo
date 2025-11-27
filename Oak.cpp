#include "Oak.h"

unsigned int Oak::_oak_counter = 0;

Oak::Oak(std::string name_create)
    : Tree(name_create, tree_type_oak)
{
    ++_oak_counter;
}

Oak::Oak(const Oak& oak_to_copy)
    : Tree(oak_to_copy)
{
    ++_oak_counter;
}

void Oak::wind() {
    std::cout << "Tree name : " << getName() << "\n" << "Tree type : Oak \n";
}

unsigned int Oak::getOakCount() {
    return _oak_counter;

}
