#include "Ñoniferous_forest.h"

bool Coniferous_Forest::canAddTree(tree_type tree_type) const {
    return tree_type == tree_type_spruce || tree_type == tree_type_pine;
}