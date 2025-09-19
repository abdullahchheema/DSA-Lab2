#include <iostream>
#include <string>

using namespace std;

int main() {
	string* input = new string;
	cout << "Enter the string: " << endl;
	getline(cin, *input);
	int length = input->length();
	cout << "Original String: " << *input << endl;
		 
	for (int i = 0; i < length / 2; i++) {
		char temp = (*input)[i];
		(*input)[i] = (*input)[length - 1 - i];
		(*input)[length - 1 - i] = temp;
	}

	cout << "Reversed String: " << *input << endl;


	return 0;


}