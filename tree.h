#pragma once

#include <string>
#include <iostream>

enum tree_type {
	tree_type_oak,tree_type_birch,tree_type_dark_oak
};

class Tree
{
private:
	static unsigned int _tree_counter;

	tree_type _tree_type;

	std::string _tree_name; 

	unsigned int _tree_id;
public:
	Tree(std::string name_create, tree_type tree_type_create);

	Tree(const Tree &tree_to_copy);

	//void set_tree_id(unsigned int tree_id_to_set);

	//void set_name(std::string tree_name_to_set);

	//void set_tree_type(tree_type tree_type_to_set);

	const unsigned int getId();

	const std::string getName();

	void wind();
};

