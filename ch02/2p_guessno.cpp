// A multi-player guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int guess;
	int secretNumber;
	int tries, compTries, turn, upperLimit, lowerLimit;
    string currentPlayer;

	srand(static_cast<unsigned int>(time(0))); // Seeding the random number generator
	secretNumber = rand() % 100 + 1;

	cout << "\tWelcome to Guess My Number\n";
	cout << "\nYou will be playing against the computer\n";
    tries = 0;
    compTries = 0;
    upperLimit = 100;
    lowerLimit = 1;
	turn = rand() % 2 + 1;
	do {
		if (turn == 1) {
			cout << "\nEnter your guess: ";
			cin >> guess;
            ++tries;
            turn = 2;
		} else {
            guess = rand() % (upperLimit - lowerLimit) + lowerLimit;
            ++compTries;
			cout << "\nComputer's guess is: " << guess << endl;
            turn = 1;
		}
		
		if (guess > secretNumber) {
            cout << "\nToo High\n";
            upperLimit = guess;
        } else if (guess < secretNumber) {
            cout << "\nToo Low\n";
            lowerLimit = guess;
        } else {
            if (turn == 2) {
                cout << "That's it! You got it in " << tries << " guesses\n";
            } else {
                cout << "That's it! Computer got it in " << compTries << " guesses\n";
            }
        }

	} while (guess != secretNumber);
}