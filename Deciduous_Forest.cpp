#include "Deciduous_Forest.h"

bool Deciduous_Forest::canAddTree(tree_type tree_type) const {
    return tree_type == tree_type_oak || tree_type == tree_type_birch;
}