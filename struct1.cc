# include <iostream>
using namespace std;

struct part{
		int modelnumber;
		int partnumber;
		float cost;
};

int main(int argc, char** argv) {
		part part1; //define a struct variable
	  part part2 ={76,987,7.98F};  //struct initialization

		part1.modelnumber = 6244;
		part1.partnumber = 373;
		part1.cost = 217.55F;

		cout << "Model " << part1.modelnumber << endl;
    cout << "Part Number" << part2.partnumber << endl;
		return 0;
}

