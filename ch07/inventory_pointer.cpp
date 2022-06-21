// Inventory Pointer
// Demonstrates returning a pointer

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// returns a pointer to a string element
string* ptrToElement(vector<string>* const pVec, int i);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	// displays string objects that the returned pointer points to 
	cout << "Sending the object pointed to by the returned poionter to cout:\n";
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";
	/// Assigns one pointer to another -- inexpensive assignment
	cout << "Assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout << "Sending the object pointed to by the new pointer to cout: \n";
	cout << *pStr << "\n\n";

	// copies a string object -- expensive assignment
	cout << "Assigning object pointed to by pointer to a string object.\n";

	string str = *(ptrToElement(&inventory, 2));
	cout << "Sending the new string object to cout:\n";
	cout << str << "\n\n";

	// Altering the string object through a returned pointer
	*pStr = "Healing Potion";
	cout << "Sending the altered object to cout:\n";
	cout << inventory[1] << endl;

	return 0;
}

string* ptrToElement(vector<string>* const pVec, int i) {
	// returns address of the string in position i of vector that pVec points to
	return &((*pVec)[i]);
}


// string* badPointer() {
//   string local = "This string will cease to exist once the function ends.";
// 	 string* pLocal = &local;
// 	 return pLocal;
// }