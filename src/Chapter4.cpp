#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	int i;
	int j;
	int size;
	string line;

	// horizontal line
	cout << "Input size: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		cout << "* ";
	}

	cout << "\n\n";


	// vertical line
	cout << "Input size: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		cout << "*\n";
	}

	cout << "\n\n";

	// Top to bottom diagonal
	cout << "Can I haz Input size, pls?: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		for(j = 0; j < i; ++j) {
			cout << " ";
		}	
		cout << "*\n";
	}

	cout << "\n\n";

	// Bottom to top diagonal
	cout << "I know this is getting old, but, can I have a size, pls?: ";
	getline(cin, line);
	size = stoi(line);

	for(
	
}
