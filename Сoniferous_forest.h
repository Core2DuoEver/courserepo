#pragma once
#include "Forest.h"

class Coniferous_Forest : public Forest
{
public:
    bool canAddTree(tree_type tree_type) const override;
};
