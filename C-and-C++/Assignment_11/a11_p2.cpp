//CH 230-A
//a11_p2.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream>

using namespace std;

//Creating a class creature
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};
//Empty Constructor
Creature::Creature(): distance(10)
{}    
//Print constrcutor
void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
//Creating a class Wizard
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};
//Calling a constrcutor and declaring a factor
Wizard::Wizard() : distFactor(3)
{}  
//Print Constructor
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
//Creating a class Hobbit
class Hobbit: public Creature{
    private: 
        int distFactor;
    public:
        Hobbit(); 
        void walk() const; 
};
//Print constructor
void Hobbit:: walk() const {
    cout << "The Hobbit is walking " << (distFactor * distance) << " meters" << endl;
}
//Calling a constrcutor and declaring a factor
Hobbit:: Hobbit() : distFactor(8)
{}
//Creating a class gargoyle
class Gargoyle: public Creature{
    public:
        Gargoyle();
        void crawl() const;
    private: 
        int distFactor; 
};
//Calling a constrcutor and declaring a factor
Gargoyle:: Gargoyle() : distFactor(2)
{}
//Printing constructor 
void Gargoyle:: crawl() const{
    cout << "The Gargoyle travels " << distFactor * distance << " meters" << endl; 
}

int main()
{ 
    cout << endl << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << endl << "Creating a Hobbit" << endl;
    Hobbit h; 
    h.run(); 
    h.walk();

    cout << endl << "Creating a Gargoyle" << endl; 
    Gargoyle g;
    g.run(); 
    g.crawl();

    cout << endl;
    return 0;
} 