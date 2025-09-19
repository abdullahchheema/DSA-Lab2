#include <iostream>

using namespace std;

void analyze_pointer(int* ptr) {
	cout << "Address of number: " << ptr << endl;
	cout << "Value at address: " << *ptr << endl;
	cout << endl;
}  

int main() {
	// Part 1
	int number = 2005;
	//analyze_pointer(&number);

	// Part 2
	
	int iValue = 2025;
	analyze_pointer(&iValue);

	int* heap = new int;
	*heap = 1245;
	analyze_pointer(heap);

	
	



	return 0;
}