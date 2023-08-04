//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p1

#include <string> 
using namespace std;


class Critter
{
private:  // data members are private
	string name;
	int hunger;
	int boredom; 
	double height;
	string color; 
	int age; 

public: // business logic methods are public
	// setter methods
	void setName(string &newname);
	void setHunger(int &newhunger);
	void setHeight(double &newheight); 
	void setColor(string &newcolor); 
	void setBoredom (int &newboredom); 
	void setAge (int &newage); 
	// getter methods
	string getName();
	int getHunger();
	double getHeight();
	string getColor();
	int getBoredom();
	int getAge();
	// service method
	void print();
};