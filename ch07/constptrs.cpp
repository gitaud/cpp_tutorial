// Constant Pointers
// Demonstrating how you can restrict pointer usage

#include <iostream>
#include <string>

using namespace std;

int main() {
	int score = 100;
	int anotherScore = 200;
	int* const pScore = &score; // a constant pointer

	cout << "The value of the constant pointer is ";
	cout << *pScore << endl;
	// something illegal 
	// string* const illegalPtr;
	// You must initialize the pointer since you can't change it after declaration

	// another illegal operation
	// pScore = &anotherScore;
	// You can't change the address the pointer points to once the address is set

	// OK, now something legal
	*pScore = 500;
	cout << "The new value of the constant pointer is ";
	cout << *pScore << endl;

	// Pointing to a constant
	const int number = 25;
	const int* pnumber = &number;

	cout << "A pointer to a constant: " << *pnumber << endl;

	int numberAgain = 22;
	pnumber = &numberAgain;
	cout << "A pointer to a constant: " << *pnumber << endl;
	// Illegal move 
	// *pnumber += 25;
	// You can't change the value whose address is held by the pointer since it is a constant

	return 0;
}