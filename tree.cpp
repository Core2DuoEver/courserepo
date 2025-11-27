#include "tree.h"

unsigned int Tree::_tree_counter = 0;

Tree::Tree(std::string name_create, tree_type tree_type_create) {

	treeType = tree_type_create;

	_tree_name = name_create;

	_tree_counter++;

	_tree_id = _tree_counter;
}

Tree::Tree(const Tree& tree_to_copy) {

	treeType = tree_to_copy.treeType;

	_tree_name = tree_to_copy._tree_name;

	_tree_counter++;

	_tree_id = _tree_counter;
}

const unsigned int Tree::getId() {
	return _tree_id;
}

const std::string Tree::getName() {
	return _tree_name;
}

tree_type Tree::get_type() {
	return treeType;
}

void Tree::wind() { //Not really needed in 13
	std::cout << "Tree name : " << _tree_name << "\n";

	std::cout << "Tree type : ";
	switch (treeType) {
	case(tree_type_oak): {
		std::cout << "Oak \n";
	}break;

	case(tree_type_birch): {
		std::cout << "Birch \n";
	}break;

	case(tree_type_spruce): {
		std::cout << "Spruce \n";
	}break;

	default: {
		std::cout << "Unknown \n";
	}break;

	}
}