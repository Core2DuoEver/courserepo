#pragma once

#include "tree.h"

#include "Pine.h"
#include "Oak.h"
#include "Birch.h"
#include "Spruce.h"

#include <vector>
#include <memory>

class Forest
{
protected:
    std::vector<std::shared_ptr<Tree>> _tree_vector;
    unsigned int _forest_tree_count = 0;

public:
    Forest() = default;

    virtual ~Forest() = default;

    virtual bool canAddTree(tree_type tree_type) const = 0;

    unsigned int getTreesNumber() const;
    void growUp(std::shared_ptr<Tree> tree_to_grow);
    void cutAll();

    //const std::string& getName() const;
    //const std::vector<std::shared_ptr<Tree>>& getTrees() const;

    void windInForest() const;

    //Forest operator + (const Forest& forest_to_add) const;
};