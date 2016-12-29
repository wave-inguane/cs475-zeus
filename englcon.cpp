// englcon.cpp
// constructors, adds objects using member function
# include <iostream>
using namespace std;
///////////////////////////////////////////////////

class Distance  //English Distance class
{
		private:
				int feet;
				float inches;
		public:
				Distance() : feet(0), inches(0.0){} //default constructor
				// constructor with parameters 
				Distance(int ft, float in) : feet(ft), inches(in){}

				void getdist(){
						cout << "\nEnter feet: "; cin >> feet;
						cout << "Enter inches: "; cin >> inches;
				}

				void showdist(){
						cout << feet << "\'-" << inches << '\"';
				}
			
				void add_dist( Distance, Distance ); //to be implemented outside the class

};
//---------------------------------------------------
void Distance::add_dist(Distance d2,  Distance d3 ){
		inches = d2.inches + d3.inches;
		feet = 0;
		if(inches >= 12.0)
		{
				inches -= 12.0;
				feet++;
		}
		feet += d2.feet + d3.feet;
}
////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
		Distance dist1, dist3; // default constructor called automatically  
		Distance dist2(11, 6.25); // declare and initialize object

		dist1.getdist(); //from user
		dist3.add_dist(dist1, dist2);

		cout << "\ndist1 = "; dist1.showdist();
		cout << "\ndist2 = "; dist2.showdist();
		cout << "\ndist3 = "; dist3.showdist();
		cout << endl;
}
