#include <iostream>

namespace utilities {
    void calculator() {
		// Declare variables
		bool running = true;
		int input1 = 0; // 1st num
		int input2 = 0; // 2nd num
		int input3 = 0; // Operation

		while(running) {
			// Getting numbers
	        	std::cout << "Input your first number: ";
			std::cin >> input1;

			std::cout << "Input your second number: ";
			std::cin >> input2;

			std::cout << "Write:\n"
<< "(0) Exit\n"
<< "(1) Add\n"
<< "(2) Substract\n"
<< "(3) Multiply\n"
<< "(4) Divide\n";
			std::cin >> input3;

			// Start writing result
			std::cout << "Result: ";
			switch(input3) {
			// Exit
			case 0:
				running = false;
				break;
			// Addition
			case 1:
				std::cout << input1 + input2;
				break;
			// Substraction
			case 2:
				std::cout << input1 - input2;
				break;
			// Multiplication
			case 3:
				std::cout << input1 * input2;
				break;
			// Division
			case 4:
				std::cout << input1 / input2;
				break;
			}
			std::cout << std::endl << std::endl;
		}
    }
}
