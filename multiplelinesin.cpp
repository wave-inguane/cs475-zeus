#include<iostream>
using namespace std;

const int MAX = 2000;
char buffer[MAX];

int main(int argc, char** argv){
		cout << "\nEnter a string:\n";
		cin.get(buffer, MAX, '$'); //terminate with $
		cout << "You entered:\n" << buffer << endl;
		return 0;
}
