// A re-implementation of the Play Again Program

#include <iostream>
using namespace std;

int main() {
	char playAgain;
	do {
		cout << "**Played a nice game**\n";
		cout << "Do you want to play again (y/n): ";
		cin >> playAgain;
	} while( playAgain == 'y');
	cout << "\nOkay, bye!\n";

	return 0;
}