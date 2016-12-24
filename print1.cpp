#include <iostream>
using namespace std;

void starline();
void repchar(char,int);

int main(int argc, char** argv)
{
		starline();
		cout << "Every age has a language of its own\n";
		repchar('=', 45);
		return 0;
}

void starline(){
		for(int j=0; j<45; j++)
				cout << '*';
		cout << endl;
}

void repchar(char ch, int n ){
		for(int j=0; j<n; j++)
				cout << ch;
		cout << endl;
}
