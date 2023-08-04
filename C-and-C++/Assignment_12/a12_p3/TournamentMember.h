//CH 230-A
//Irfan Karmali 
//a12_p3
//i.karmali@jacobs-university.de

#include <iostream>
#include <cstring>

using namespace std; 

//Creating a class Tournament Member 
class TournamentMember{
    //Private members
    protected:
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
//Player class
class Player: public TournamentMember{ 
    public: //public members
        Player(const char[], const char[], const char[], int, 
                int, int, const string, int, const string);
        ~Player(); 
        Player(const Player &); 
        void set_Number(const int);
        void increment_Goals(); 
        void set_Position(const string); 
        void set_Foot(const string);
        void print() const; 
    private: //private members
        int number;
        string position; 
        int goals; 
        string foot; 
};



