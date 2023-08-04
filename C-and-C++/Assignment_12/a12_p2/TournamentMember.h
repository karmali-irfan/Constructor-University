//CH 230-A
//Irfan Karmali 
//a12_p2
//i.karmali@jacobs-university.de

#include <iostream>
#include <cstring>

using namespace std; 

//Creating a class Tournament Member 
class TournamentMember{
    //Private members
    private:
        char firstname[36]; 
        char secondname[36];
        char birthdate[11];
        static string location; //static variable
        int age; 
        int experience;
    //public members
    public: 
        ~TournamentMember(); 
        TournamentMember(const TournamentMember &); 
        TournamentMember();
        TournamentMember(const char[], const char[], const char[], int, int);
        void set_firstName(const char[]); 
        void set_secondName(const char[]); 
        void set_birthdate( const char[]);
        void set_Age(const int);
        void set_Exp(const int);
        string get_firstName() const; 
        string get_secondtName() const; 
        string get_birthdate() const; 
        static void set_Location(string); //static method for location 
        void print();
};


