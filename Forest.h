#pragma once

#include "tree.h";

#include <vector>;

class Forest
{
private:
	std::vector<Tree> _tree_vector;

	unsigned int _forest_tree_count = 0;
public: 

	unsigned int getTreesNumber();

	void growUp(Tree _tree_to_grow);

	void cutAll();

	Forest operator + (const Forest& forest_to_add) const;
};

