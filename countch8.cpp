// countpp1.cpp
// increment counter variable with ++ operator
# include <iostream>
using namespace std;
//--------------------------------------------
class Counter
{
	private:
			unsigned int count; //count
	public:
			Counter() : count(0)	//constructor
		   {}
 		 unsigned int get_count(){
				 return count;
		 }

		 void operator ++ (){
				 ++count;
		 }
}; //end class

int main(int argc, char** argv){ 
		Counter  c1, c2; //define and initialize

		cout << "\n c1 = " << c1.get_count(); //display
		cout << "\n c2 = " << c2.get_count();

		++c1;
		++c2;
		++c2;

		cout <<"\n c1 =  "<< c1.get_count();
		cout <<"\n c2 = "<< c2.get_count() << endl;
		return 0;
}

	
