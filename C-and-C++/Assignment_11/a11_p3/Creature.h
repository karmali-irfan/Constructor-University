//CH 230-A
//a11_p3.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream>
using namespace std; 

//class Definitions

class Creature{
    protected: 
        int distance; 
    public:
        Creature(); 
        void run() const;
};

class Wizard: public Creature{
    public: 
        Wizard(); 
        void hover() const; 
    private:
        int distFactor;
}; 

class Hobbit: public Creature{
    public:
        void walk() const; 
        Hobbit();
    private:
        int distFactor; 
}; 

class Gargoyle: public Creature{
    public: 
        Gargoyle(); 
        void crawl() const; 
    private: 
        int distFactor; 
};