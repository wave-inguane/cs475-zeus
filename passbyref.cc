#include <iostream>
using namespace std;

void swap(int&, int&);

int main(int argc, char** argv) {
		
		int n1 = 99;
	 int n2 = 11;

  swap(n1, n2);

	cout << "n1 = " << n1 << endl;
  cout << "n2 = " << n2 << endl;
}

void swap(int& a, int& b){
		if(a > b){
				int t = a;
				a = b;
				b = t;
		}
}
