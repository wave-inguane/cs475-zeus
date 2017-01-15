#include <iostream>
using  namespace std;

int main(int argc, char** argv){
		const int MAX = 80;
		char buffer[MAX];

		cout << "\nEnter a string: ";
		cin.get(buffer, MAX);
		cout << "You entered: " << buffer << endl;
		return 0;
}
