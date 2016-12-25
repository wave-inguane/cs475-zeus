// counter.cpp
// object reprecents a counter variable
#include <iostream>
using namespace std;
/////////////////////////////////////////////
class Counter
{
		private:
				unsigned int count;

		public:
					Counter() : count(0){
							//default constructor
					}
					void inc_count(){
							count++;
					}
					void dec_count(){
							count--;
					}
					int get_count(){
							return count;
					}
}
////////////////////////////////////////////

