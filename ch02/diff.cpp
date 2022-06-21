// Selecting difficulty levels
#include <iostream>
using namespace std;

int choice;

int main() {
	cout << "Difficulty levels \n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";

	cout << "Choice: ";
	cin >> choice;
	
	// Printing the output
	switch(choice) {
		case 1:
			cout << "You picked Easy";
			break;
		case 2:
			cout << "You picked Normal";
			break;
		case 3:
			cout << "You picked Hard";
			break;
		default:
			cout << "Invalid choice";
	}
	cout << "\n-\n";
	return 0;
}