#include <iostream>
#include <iomanip>

using namespace std;


/**
 * setw will set string max-length
 * No space in between is allowed 
 */
int main(int argc, char** argv){
		const int MAX = 20;
		char buffer[20];

		cout << "\nEnter a string: ";
		cin >> setw(MAX) >> buffer;

		cout << "You entered: " << buffer  << endl;
		return 0;
}
