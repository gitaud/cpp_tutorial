// Die Roller
// Demonstrating the random function

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRand() {
	srand(static_cast<unsigned int> (time(0))); // seed random number generator
	int randomNumber = rand(); // generate random number
	int die = (randomNumber % 6) + 1; // Get a number between 1 and 6
	return die;
}

int main() {
	int die;
	char again;
	do {
		cout << "YOu rolled a " << getRand() << endl;
		cout << "Do you want to play again (y/n): ";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye\n"; 
	return 0;
}