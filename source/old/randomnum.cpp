#include <random>
#include <iostream>

namespace utilities {
	void randomnum() {
		bool running = true;
		int input1 = 0; // 1st num
		int input2 = 0; // 2nd num
		std::random_device seed;
		std::mt19937 gen{seed()}; // Make random stuff happen

		while(running) {
			std::cout << "Min number: ";
			std::cin >> input1;

			std::cout << "Max number: ";
			std::cin >> input2;

			std::uniform_int_distribution<> dist{input1, input2}; // Set range
			int random = dist(gen);
			std::cout << random << std::endl;
			
		}
	}
}
