#pragma once

#include "tree.h"

class Birch : public Tree
{
private:
    static unsigned int _birch_counter; 
public:
    Birch(std::string name_create);
    Birch(const Birch& birch_to_copy);
    void wind() override;

    static unsigned int getBirchCount();
};