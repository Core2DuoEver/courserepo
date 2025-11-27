#pragma once

#include "tree.h"

class Spruce : public Tree
{
private:
    static unsigned int _spruce_counter;
public:
    Spruce(std::string name_create);
    Spruce(const Spruce& spruce_to_copy);
    void wind() override;

    static unsigned int getSpruceCount();
};