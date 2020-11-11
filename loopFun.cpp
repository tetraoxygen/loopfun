#include <iostream>
#include <iomanip>

int main()
{

	int boxHeight = 0;
	int boxWidth = 0;

	std::cout << "Enter a box height (it should be between 3 and 10): ";
	std::cin >> boxHeight; 

	while (3 > boxHeight || boxHeight > 10) {
		std::cout << "That's out of bounds (it should be between 3 and 10): ";
		std::cin >> boxHeight; 
	}
	
	std::cout << "Enter a box width (it should be between " << boxHeight + 1 << " and 20): ";
	std::cin >> boxWidth; 
	
	while (boxHeight > boxWidth || boxWidth > 20) {
		std::cout << "That's out of bounds (it should be between " << boxHeight + 1 << " and 20): ";
		std::cin >> boxWidth; 
	}
	
	int rangeSum = 0;
	int rangeLength = 0;
	
	std::cout << "The integers from " << boxHeight << " to " << boxWidth << " are:" << std::endl << "\t";
	for (int i = boxHeight; i <= boxWidth; i++) {
		std::cout << i << " ";
		// Sums up the contents of the range. 
		rangeSum += i;
		// Increases the total length of this range by 1 each time, resulting in the total length of the range.
		rangeLength += 1;
	}
	std::cout << std::endl << "and the average of those numbers is " << (float)rangeSum / (float)rangeLength << std::endl << std::endl; 
	
	std::cout << std::setfill('*') << std::setw(boxWidth) << "" << std::endl;
	for (int i = 0; i < boxHeight -2; i++) {
		std::cout << std::setw(boxWidth - 2) << std::left << std::setfill(' ') << "*" << std::internal << " " << std::right << "*" << std::endl;
	}
	std::cout << std::setfill('*') << std::setw(boxWidth) << "" << std::endl << std::endl;
	
	for (int i = 0; i <= boxHeight; i ++) {
		std::cout << std::setfill('*') << std::setw(i * 2) << "" << std::endl;
	}
	
	std::cout << std::endl;
}
