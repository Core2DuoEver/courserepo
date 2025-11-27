#pragma once

#include "tree.h"

class Pine : public Tree
{
private:
    static unsigned int _pine_counter;
public:
    Pine(std::string name_create);
    Pine(const Pine& spruce_to_copy);
    void wind() override;

    static unsigned int getPineCount();
};