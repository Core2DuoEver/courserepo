#include "Forest.h";

int main() {
	Tree coolest_tree("very_cool_tree", tree_type_dark_oak); //Creating trees
	Tree lame_tree("not_cool_tree", tree_type_oak);

	Tree lame_tree2(lame_tree);
	Tree coolest_tree2(coolest_tree); //Copying trees.

	lame_tree.wind(); //Wind.
	lame_tree2.wind();
	coolest_tree2.wind();
	coolest_tree.wind();

	Forest lame_forest;
	Forest cool_forest;

	lame_forest.growUp(lame_tree); //Adding
	lame_forest.growUp(lame_tree2);

	cool_forest.growUp(coolest_tree);
	cool_forest.growUp(coolest_tree2);

	std::cout << lame_forest.getTreesNumber() << "<- Lame forest | Cool forest -> " << cool_forest.getTreesNumber() << "\n"; //get trees number

	Forest equal_forest; 

	equal_forest = lame_forest + cool_forest; // + operator

	std::cout << equal_forest.getTreesNumber() << "<- Equal forest \n";

	cool_forest.cutAll(); //Cut!

	std::cout << cool_forest.getTreesNumber() << "<- Cutted cool forest \n";
}
