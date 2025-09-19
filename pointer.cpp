#include <iostream>

using namespace std;

void analyze_pointer(int* ptr) {
	cout << "Address of number: " << ptr << endl;
	cout << "Value at address: " << *ptr << endl;
}  

int main() {
	int number = 2005;
	
	analyze_pointer(&number);



	return 0;
}