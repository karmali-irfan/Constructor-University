//CH 230-A
//Irfan Karmali 
//a12_p3
//i.karmali@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
#include <cstring>
using namespace std; 


string TournamentMember:: location = "London"; //static allocation

//Destructor
inline TournamentMember:: ~TournamentMember(){
    cout << "Tournament Member Destrcuctor" << endl;
}
//Copy Constructor
inline TournamentMember:: TournamentMember (const TournamentMember &){
    cout << "Copy constructor being called" << endl;
}
//Default Constructor
inline TournamentMember:: TournamentMember(){
    cout << "Default Constructor being called" << endl;
    strcpy(firstname, "noname");
    strcpy(secondname, "noname");
    //birthdate[11] = "nodate";
    age = 0; 
    experience = 0;
}
//Parametric Constructor 
inline TournamentMember:: TournamentMember(const char firstname[36], const char secondname[36], 
                                    const char birthdate[11], int age, int experience)
{
    cout << "Tournament Member Parametric Constrcutor being called" << endl; 
    strcpy(this->firstname, firstname);
    strcpy(this->birthdate, birthdate);
    strcpy(this->secondname, secondname);
    this -> experience = experience;
    this -> age = age; 
}
//Setter Methods
inline void TournamentMember:: set_firstName(const char name[36]){
    strcpy(firstname, name);
}
inline void TournamentMember:: set_secondName(const char name[]){
    strcpy(secondname, name);
}
inline void TournamentMember:: set_birthdate(const char birthdate[]){
  strcpy(this->birthdate, birthdate);
}
inline void TournamentMember:: set_Age(const int age){
    this->age = age; 
}
inline void TournamentMember:: set_Exp(const int exp){
    experience = exp; 
}
void TournamentMember:: set_Location(string newlocation){
    location.assign(newlocation) ; 
} 
//Getter methods
inline string TournamentMember:: get_firstName() const {
    return firstname;
}
inline string TournamentMember:: get_secondtName() const {
    return secondname;
}
inline string TournamentMember:: get_birthdate() const{
    return birthdate;
}
//Print Function
inline void TournamentMember:: print(){
    cout << endl;
    cout << firstname << " " << secondname << " is " << age << " years old."; 
    cout << " Level of experience is " << experience << ". Plays in "; 
    cout << location << ". Was born on " << birthdate <<". ";
    cout << endl << endl;
}
//Parametric Constructor for Player
Player:: Player(const char a[], const char b[], const char c[], int d, 
                int e, int f, const string g, int h, const string i): 
                TournamentMember(a, b, c, d, e)
{
    cout << "Player constructor being called" << endl;
    number = f; 
    position = g; 
    goals = h; 
    foot = i;
}
//Print function for the player 
void Player:: print() const{
    cout << endl;
    cout << firstname << " " << secondname << " is " << age << " years old."; 
    cout << " Level of experience is " << experience << ". Plays in "; 
    cout << location << ". Was born on " << birthdate <<". ";
    cout << "Plays as a " << position << " with the number " << number ; 
    cout <<". Scored " << goals << " goals. Uses " << foot << " foot.";  
    cout << endl ;
} 
//Incerementing goals function for the player
void Player:: increment_Goals(){
    goals = goals + 1; 
}
//PLayer destructor
Player:: ~Player(){
    cout << "Player's Destructor" <<  endl; 
}
//Player copy constructor
Player::  Player(const Player &copy){
    cout << "Copy Constructor" << endl;
    number = copy.number;
    position = copy.position; 
    foot = copy.foot; 
}
//Player setter methods 
void Player:: set_Number(const int number){
    this->number = number; 
}
void Player:: set_Position(const string position){
    this->position = position; 
} 
void Player:: set_Foot(const string foot){
    this->foot = foot;
}