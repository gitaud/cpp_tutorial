// Guess my Number
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0))); // seed random numer generator
	int secretNumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number\n\n";

	// The game loop
	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber) {
			cout << "\nToo high!\n\n";
		}
		else if (guess < secretNumber) {
			cout << "\nToo low!\n\n";
		} else {
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;
}