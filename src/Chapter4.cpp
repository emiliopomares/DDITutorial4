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

	// box
	cout << "Input size, again: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		for(j = 0; j < size; ++j) {
			cout << "* ";
		}
		cout << "\n";
	}

	cout << "\n\n";

	// Top to bottom diagonal
	cout << "Can I haz Input size, pls?: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		for(j = 0; j < i; ++j) {
			cout << "  ";
		}	
		cout << "*\n";
	}

	cout << "\n\n";

	// Bottom to top diagonal
	cout << "I know this is getting old, but, can I have a size, pls?: ";
	getline(cin, line);
	size = stoi(line);

	for(i = 0; i < size; ++i) {
		for(j = 0; j < (size-i); ++j) {
			cout << "  ";
		}
		cout << "*\n";
	}

	cout << "\n\n";

	
	// frame, engineer style
	cout << "Please bear with me: ";
	getline(cin, line);
	size = stoi(line);

	// first line
	for(j = 0; j < size; ++j) {
		cout << "* ";
	}
	cout << "\n";
	// middle lines
	for(i = 1; i < size-1; ++i) {
		cout << "* ";
		for(j = 1; j < size-1; ++j) {
			cout << "  ";
		}
		cout << "* \n";
	}
	// last line
	for(j = 0; j < size; ++j) {
		cout << "* ";
	}

	cout << "\n\n";


	// Checkbox, engineer style
	cout << "Almost there, I promise: ";
	getline(cin, line);
	size = stoi(line);

	bool isOdd = (size % 2 != 0);

	// first line
	for(j = 0; j < size; ++j) {
		cout << "* ";
	}
	cout << "\n";
	// top middle lines
	for(i = 1; i <= (size-1)/2-isOdd; ++i) {
		// start of row
		cout << "* ";
		// spaces
		for(j = 1; j < i; ++j) {
                        cout << "  ";
                }
		// asterisk	
		cout << "* ";
		// moar spaces
		for(j = 0; j < size-2-i*2; ++j) {
			cout << "  ";
		}
		// second asterisk
		cout << "* ";
		// even moar spaces
                for(j = 1; j < i; ++j) {
                        cout << "  ";
                }
		// end of row
		cout << "*\n";
	}
	if(isOdd) {
		cout << "* ";
		for(j = 0; j < size/2-1; ++j) {
			cout << "  ";
		}
		cout << "* ";
		for(j = 0; j < size/2-1; ++j) {
			cout << "  ";
		}	
		cout << "*\n";
	}
 	// bottom middle lines
        for(i = 1; i <= (size-1)/2-1; ++i) {
                // start of row
                cout << "* ";
                // spaces
                for(j = 1; j < (size-2-i*2)/2+isOdd; ++j) {
                        cout << "  ";
                }
                // asterisk
                cout << "* ";
                // moar spaces
                for(j = 0; j < i*2-isOdd; ++j) {
                        cout << "  ";
                }
                // second asterisk
                cout << "* ";
                // even moar spaces
                for(j = 1; j < (size-2-i*2)/2+isOdd; ++j) {
                        cout << "  ";
                }
                // end of row
                cout << "*\n";
        }
	// last line
	for(j = 0; j < size; ++j) {
		cout << "* ";
	}

	cout << "\n\n";
	
}
