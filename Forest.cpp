#include "Forest.h"

void Forest::growUp(Tree _tree_to_grow) {

	_tree_vector.push_back(_tree_to_grow);

	_forest_tree_count++;
}

unsigned int Forest::getTreesNumber() {
	return _forest_tree_count;
}

void Forest::cutAll() {
	_tree_vector.clear();

	_forest_tree_count = 0;
}

Forest Forest::operator + (const Forest& forest_to_add) const {
    Forest result(*this);

    result._forest_tree_count += forest_to_add._forest_tree_count;

    for (const auto& tree : forest_to_add._tree_vector) {
        result._tree_vector.push_back(tree);
    }

    return result;
}