// String Pointer
// A pointer to a pointer to a string

#include <iostream>
#include <string>

using namespace std;

int main() {
	string name = "Denis";
	string* pName = &name;
	string** pPName = &pName;

	cout << (*pPName)->size() << endl;
	cout << *(*pPName) << endl;
	return 0;
}