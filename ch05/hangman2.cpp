// Hangman 2
// Rewriting Hangman using functions

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int checkGuess(char guess, string word, string used);
char getGuess(string prompt);

int main() {
	const int MAX_WRONG = 8; // maximum number of incorrect guesses allowed
	vector<string> words; // collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD = words[0]; // word to guess
	int wrong = 0; // number of incorrect guesses

	string soFar(THE_WORD.size(), '-'); // word guessed so far
	string used = ""; // letters already guessed

	cout << "Welcome to Hangman. Good luck!";

	// main loop
	while((wrong < MAX_WRONG) && (soFar != THE_WORD)) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left\n";
		cout << "\nYou've used the following letters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;

		// Now, get the player's guess;
		char guess = getGuess("\nEnter your guess: ");
		int guess_Right = checkGuess(guess, THE_WORD, used);
		while (guess_Right == 2) {
			cout << "\nYou've already guessed " << guess << endl;
			guess = getGuess("Enter your guess: ");
			guess_Right = checkGuess(guess, THE_WORD, used);
		}
		used += guess;

		if (guess_Right == 1) {
			cout << "That's right! " << guess << " is in the word.\n";
			// update soFar to include newly guessed letter
			for (int i = 0; i < THE_WORD.length(); ++i)  {
				if (THE_WORD[i] == guess) {
					soFar[i] = guess;
				}
			}
		} else if (guess_Right == 0) {
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
	}
	if (wrong == MAX_WRONG) {
		cout << "\nYou've been hanged!";
	} else {
		cout << "\nYou guessed it!";
	}
	cout << "\nThe word was " << THE_WORD << endl;
	return 0;
}

int checkGuess(char guess, string word, string used) {
	if (used.find(guess) == string::npos) {
		if (word.find(guess) != string::npos) {
			return 1;
		}
	} else {
		return 2;
	}
	return 0;
	
}

char getGuess(string prompt) {
	char guess;
	cout << prompt;
	cin >> guess;
	guess = toupper(guess); // make uppercase since secret word in uppercase
	return guess;
}