// Gamelist
// A program to store a list of games

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string game;
	string input;
	vector<string> games;
	vector<string>::const_iterator iter;
	vector<string>::iterator myIter;
	cout << "Welcome to gamelist.\n";
	cout << "You can store a list of your favorite games here" << endl;

	// Add, list or remove game
	cout << "\nInstructions: \n\nEnter \na to add a game, \nl to list your games, \nr to remove a game or \nq to quit: \n\n";
	while (input != "q") {
		cin >> input;

		if (input == "a") {
			cout << "\nEnter the game's name to add it: ";
			cin >> game;
			games.push_back(game);
			cout << "\nSuccessfully added! Enter your instruction to continue\n: ";
		} else if (input == "l") {
			cout << "\nHere's a list of your games\n\n" << endl;
			for (iter = games.begin(); iter != games.end(); ++iter) {
				cout << *iter << endl;
			}
			cout << "\n\nEnter your instruction: " << endl;
		} else if (input == "r") {
			cout << "\nEnter the game's name to remove it: ";
			cin >> game;
			for (myIter = games.begin(); myIter != games.end(); ++myIter) {
				if (myIter->find(game) != string::npos) {
					games.erase(myIter);
					// cout << *iter << endl;
				}
			}
			cout << "\nSuccessfully removed! Enter an instruction to continue: \n";
		} else if (input != "q") {
			cout << "\n\nInvalid choice!!! Please try again\n";
		}
	} 

	cout << "Goodbye!" << endl;
	return 0;
}