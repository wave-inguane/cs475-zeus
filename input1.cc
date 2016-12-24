#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
		int ftemp; //for temperature in fahrenheit
		cout<< "Enter temperature in fahrenheit: ";
		//write the input in ftemp
		cin >> ftemp;
		int ctemp =(ftemp-32) * 5 / 9;
		cout<< "Equivalent in Celsius is: "<< ctemp<< '\n';
		return 0;
}
