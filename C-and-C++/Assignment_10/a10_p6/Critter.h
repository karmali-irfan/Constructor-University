//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <string> // defines standard C++ string class

using namespace std;

class Critter
{
private:  // data members are private
	int hunger;
	int boredom;
	double height;
	double thirst;
	//Converting to double
	double converting_to_double (int);
	//Converting to int
	int converting_to_int (double); 

public: //members are public
	string name;
	void setName(string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	int getHunger();
	void print();
	//Creating first Critter Constructor
	Critter(){
		cout << endl;
		cout << "First critter" << endl; 
		name = "default_critter"; 
		hunger = 0; 
		boredom = 0;
		height = 0;
	}
	//Creating Second Critter Constructor
	Critter(string newname){
		cout << endl;
		cout<< "Second critter" << endl;
		name = newname; 
		hunger = 0; 
		boredom = 0;
		height = 5;
	}
	//Creating third Critter constructor
	Critter(int newhunger, int newboredom, string newname, double newheight = 10){
		cout << endl;
		cout<< "Third critter" << endl;
		name = newname; 
		hunger = newhunger; 
		boredom = newboredom;
		height = newheight;
	}
	Critter(int newhunger, int newboredom, string newname, double newthirst, double newheight = 10){
		cout << endl;
		cout<< "Fourth critter" << endl;
		name = newname; 
		hunger = newhunger; 
		boredom = newboredom;
		height = newheight;
		thirst = newthirst;
	}
};