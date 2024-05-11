#include <iostream>

#include "utilities.h"

int main()
{
	bool running = true;
	int input = 0;

	while(running) {
		std::cout << "\033[2J\033[1;1H"; // Clear terminal after input

		std::cout << "Write number to select thing that will run or write 0 to exit:\n"
<< "1. Calculator\n";
		std::cin >> input;
		std::cout << "\033[2J\033[1;1H"; // Clear terminal after input

		// Check for inputs
		switch(input) {
		// Exit
		case 0:
			running = false;
			break;
		// Calculator
		case 1:
			utilities::calculator();
			break;
		}
	}
	return 0;
}
