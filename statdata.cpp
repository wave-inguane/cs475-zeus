// statdata.cpp
// static class data
# include<iostream>
using namespace std;
/////////////////////////////////////////
class foo
{
		private:
				static int count; //shared data field

		public:
				foo(){ count++; }
				int getcount(){ return count; }
};

//----------------------------------------
int foo::count = 0; //initialize count
//////////////////////////////////////////////
int main(int argc, char** argv){
		foo f1, f2, f3; //create 3 objects

		cout << "count is " << f1.getcount() << endl;
		cout << "count is " << f2.getcount() << endl;
		cout << "count is " << f3.getcount() << endl;
	return 0;
}
