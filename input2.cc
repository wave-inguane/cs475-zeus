# include <iostream>
using namespace std;

int main(int argc, char** argv) {
		int age[4];
     int j;
		for( j = 0; j < 4; j++){
				cout << "Enter an age: ";
				cin >> age[j];
		}

		for(j = 0; j < 4; j++){
				cout << "You entered " << age[j] << endl;
		}

		return 0;
}
