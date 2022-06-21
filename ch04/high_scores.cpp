// High Scores
// Demonstrates algorithms

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	vector<int>::const_iterator iter;
	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout <<"\nHigh Scores:\n";

	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nFinding a score.";
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end()) {
		cout << "Score found.\n";
	} else {
		cout << "Score not found\n";
	}

	cout << "\nRandomizing scores.";
	// cout << "Time: " << time(0);
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout <<"\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << endl;
	}
	// vector<int> book;
	
	int prop;
	string books = "My new book";
	string book2;
	vector<int> scores2(10, 0);
	cout << "The size of the 'books' string variable is " << sizeof(books) << " bytes" << endl;
	char c = 'C';
	cout << "The size of the 'c' char variable is " <<  sizeof(c) << " bytes" << endl;
	cout << "The size of the 'book2' string variable is " << sizeof(book2) << " bytes" << endl;
	
	cout << "The size of the 'prop' int variable is " << sizeof(prop) << endl;
	
	cout << "The capacity of the scores2 vector is: " << scores2.capacity() << " items" << endl;
	cout << "The size of the scores2 vector is: " << scores2.size() << " items" << endl;
	for (int i = 0; i < 12; ++i) {
		scores2.push_back(1);
	}
	
	
	cout << "The capacity of the scores2 vector is now: " << scores2.capacity() << " items" << endl;
	cout << "The size of the scores2 vector is now: " << scores2.size() << " items" << endl;
	return 0;
}