#include "forest.h"
#include <iostream>

unsigned int Forest::getTreesNumber() const {
    return _forest_tree_count;
}

void Forest::growUp(std::shared_ptr<Tree> tree_to_grow) {
    if (tree_to_grow && canAddTree(tree_to_grow->get_type())) {
        _tree_vector.push_back(std::move(tree_to_grow));
        _forest_tree_count++;
    }
}

void Forest::cutAll() {
    _tree_vector.clear();
    _forest_tree_count = 0;
}

void Forest::windInForest() const {
    for (const auto& tree : _tree_vector) {
        tree->wind();
    }
}
