#include <iostream>
#include <algorithm>
#include <string>
//#include <shaper.h>
//Could be in another file
namespace Shapes {
	enum Shape {
		CIRCLE,
		SQUARE,
		TRIANGLE,
        UNKNOWN
	};
   void printShape(Shape in_shape) {
        switch (in_shape) {
        case Shapes::CIRCLE:
            std::cout << "Circle";
            break;
        case Shapes::SQUARE:
            std::cout << "Square";
            break;
        case Shapes::TRIANGLE:
            std::cout << "Triangle";
            break;
        case Shapes::UNKNOWN:
            std::cout << "Unknown shape";
            break;
        default:
            std::cout << "Invalid shape";
            break;
        }
    }

        Shape stringToShape(const std::string& shapeStr) {
        std::string lowerStr = shapeStr;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        
        if (lowerStr == "circle") return CIRCLE;
        if (lowerStr == "square") return SQUARE;
        if (lowerStr == "triangle") return TRIANGLE;
        
        return UNKNOWN; 
    }

}
int notmain() {

	Shaper::Shape main_shape = Shaper::TRIANGLE;

	Shaper::printShape(main_shape);
	
	std::string input;
    std::cout << "Enter shape (circle, square or triangle): ";
    std::cin >> input;
    Shapes::Shape shape = Shapes::stringToShape(input);
    
    Shapes::printShape(shape);
    std::cout << std::endl;
	
	return (0);

}
