// A different implementation of the finicky counter

#include <iostream>
using namespace std;

int main() {
	cout << "Finicky v2.0\n";
	int count = 0;
	while (true) {
		count += 1;
		// A loop that will otherwise always evaluate to true 
		if (count > 10) {
			break; // break out of the otherwise infinite loop
		}
		if (count == 5) {
			continue; // jump to the start of the line
		}
		cout << count << endl; // print out the count
	}
	return 0;
}