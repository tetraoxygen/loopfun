#include <iostream>
#include <iomanip>

int getInteger(int low, int high){
	int userInput = 0;
	
	std::cout << "Enter an integer (it should be between " << low << " and " <<  high << "): ";
	std::cin >> userInput; 
	
	while (low > userInput || userInput > high) {
		std::cout << "That number is out of range (it should be between " << low << " and " <<  high << "): ";
		std::cin >> userInput; 
	}
	
	return userInput;
}

void printRange(int low, int high){
	std::cout << "The integers from " << low << " to " << high << " are:" << std::endl << "\t";
	for (int i = low; i <= high; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void printAvg(int low, int high) {
	int rangeSum = 0;
	int rangeLength = 0;
	for (int i = low; i <= high; i++) {
		// Sums up the contents of the range. 
		rangeSum += i;
		// Increases the total length of this range by 1 each time, resulting in the total length of the range.
		rangeLength += 1;
	}
	std::cout << "and the average of those numbers is " << (float)rangeSum / (float)rangeLength << std::endl << std::endl; 
}

void printBox(int height, int width){
	std::cout << std::setfill('*') << std::setw(width) << "" << std::endl;
	for (int i = 0; i < height -2; i++) {
		std::cout << std::setw(width - 2) << std::left << std::setfill(' ') << "*" << std::internal << " " << std::right << "*" << std::endl;
	}
	std::cout << std::setfill('*') << std::setw(width) << "" << std::endl << std::endl;
}

void printWedge(int height){
	for (int i = 0; i <= height; i ++) {
		std::cout << std::setfill('*') << std::setw(i * 2) << "" << std::endl;
	}
}

int main()
{
	int boxHeight = getInteger(3, 10);
	int boxWidth = getInteger(boxHeight+1, 20);

	// Formatting
	std::cout << std::endl;

	printRange(boxHeight, boxWidth);
	
	printAvg(boxHeight, boxWidth);
	
	printBox(boxHeight, boxWidth);
	
	printWedge(boxHeight);
	
	// Formatting
	std::cout << std::endl;
}
