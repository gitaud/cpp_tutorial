// A finicky counter that skips the number 5

#include <iostream>
using namespace std;

int main() {
	int i = 1;
	while (i <= 10) {
		if (i != 5) {
			cout << i << endl;
			i++;
		} else {
			i++;
			continue;
		}
	}
	return 0;
}