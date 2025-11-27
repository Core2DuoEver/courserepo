#pragma once

#include <string>
#include <iostream>

enum tree_type {
	tree_type_oak, tree_type_birch, tree_type_spruce, tree_type_pine
};

class Tree
{
private:
	static unsigned int _tree_counter;

	tree_type treeType;

	std::string _tree_name; 

	unsigned int _tree_id;

protected:
	Tree(std::string name_create, tree_type tree_type_create);

public:
	Tree(const Tree &tree_to_copy);

	virtual ~Tree() = default;

	//void set_tree_id(unsigned int tree_id_to_set);

	//void set_name(std::string tree_name_to_set);

	//void set_tree_type(tree_type tree_type_to_set);

	const unsigned int getId();

	const std::string getName();

	tree_type get_type();

	virtual void wind() = 0;



};

