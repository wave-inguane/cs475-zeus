#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
		string s1("Man"); //initialize
		string s2 = "Beast";

		s1.swap(s2);

		cout << s1 << " nor "<< s2 << endl;
		return 0;
}
