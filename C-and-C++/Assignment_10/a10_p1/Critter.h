//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	std::string name;
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};