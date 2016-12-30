# include <iostream>
using namespace std;

class Stack
{
		private:
		//		enum { MAX = 10 };
				static const int MAX = 10;
				int stack[MAX];
				int top;

		public:
				Stack(){
						top = 0;
				}
				void push(int var){
						stack[++top] = var;
				}
				int pop(){
						return stack[top--];
				}
};
//////////////////////////////////////
int main(int argc, char** argv){
		Stack s1;

		s1.push(11);
		s1.push(22);

		cout << "1: " << s1.pop() << endl;

		return 0;
}
