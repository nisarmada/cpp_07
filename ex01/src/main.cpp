#include "../include/iter.hpp"

void printInt(int i) {
	std::cout << "Integer: " << i << std::endl;
}

void printString(std::string string) {
	std::cout << "String: " << string << std::endl;
}

int main () {
	int intArray[] = {1, 2, 3, 4, 4};
	std::string stringArray[] = {"hello", "how are you bro?", "I'm fine and you ?", "Good:)"};

	iter(intArray, 5, printInt); //should work
	iter(stringArray, 4, printString); // should work

	std::cout << "shorter array length test" << std::endl;
	iter(intArray, 2, printInt);
	std::cout << "longer array length test" << std::endl;
	iter(intArray, 8, printInt);

	// iter(intArray, 5, printString); // should not work
	// iter(stringArray, 4, printInt) //should not work
}