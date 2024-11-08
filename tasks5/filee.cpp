#include<iostream> 
#include<iomanip>

int main() {
	double score;

	std::cout << "Enter the number of the test's points (0,0 ... 9,0): ";
	std::cin >> std::fixed >> std::setprecision(1) >> score;
	if (score >= 0.0 && score <= 4.4) {
		std::cout << "Unsatisfactory mark (2,0)" << std::endl;
	} else if (score >= 4.5 && score <= 5.2) {
		std::cout << "Satisfactory mark (3,0)" << std::endl;
	} else if (score >= 5.3 && score <= 6.2) {
		std::cout << "Higher than satisfactory mark (3,5)" << std::endl;
	} else if (score >= 6.3 && score <= 7.2) {
		std::cout << "Good mark (4,0)" << std::endl;
	} else if (score >= 7.3 && score <= 8.2) {
		std::cout << "Better than good mark (4,5)" << std::endl;
	} else if (score >= 8.3 && score <= 9.0) {
		std::cout << "Really good  mark (5,0)" << std::endl;
	}
	return 0;
}
