// Tic-Tac-Toe Board
// Demonstrates multidimensional arrays

#include <iostream>

using namespace std;

int main() {
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'0', 'X', '0'},
								  { ' ', 'X', '0'},
								  {'X', '0', 'X'}};
	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' wins!\n\n";
	return 0;
}