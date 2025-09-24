#include <iostream>
//#include <shaper.h>
//Could be in another file
namespace Shaper {
	enum Shape {
		CIRCLE,
		SQUARE,
		TRIANGLE
	};
	void printShape(Shape in_shape) {
		switch (in_shape)
		{
		case Shaper::CIRCLE:
			std::cout << "Circle";
			break;
		case Shaper::SQUARE:
			std::cout << "Square";
			break;
		case Shaper::TRIANGLE:
			std::cout << "Triangle";
			break;
		default:
			break;
		}
	}
}
int notmain() {

	Shaper::Shape main_shape = Shaper::TRIANGLE;

	Shaper::printShape(main_shape);

	return (0);

}