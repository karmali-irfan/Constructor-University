//CH 230-A
//Irfan Karmali 
//a12_p2
//i.karmali@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
#include <cstring>
using namespace std; 


string TournamentMember:: location = "London"; //static allocation
//Default Constructor
inline TournamentMember:: TournamentMember(){
    cout << "Default Constructor being called" << endl;
    strcpy(firstname, "noname");
    strcpy(secondname, "noname");
    //birthdate[11] = "nodate";
    age = 0; 
    experience = 0;
}
//Copy Constructor
inline TournamentMember:: TournamentMember (const TournamentMember &){
    cout << "Copy constructor being called" << endl;
}
//Parametric Constructor 
TournamentMember:: TournamentMember(const char firstname[36], const char secondname[36], 
                                    const char birthdate[11], int age, int experience)
{
    cout << "Parametric Constrcutor being called" << endl; 
    strcpy(this->firstname, firstname);
    strcpy(this->birthdate, birthdate);
    strcpy(this->secondname, secondname);
    this -> experience = experience;
    this -> age = age; 
}
//Destructor
TournamentMember:: ~TournamentMember(){
    cout << "Destrcutor being called" << endl;
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
string TournamentMember:: get_firstName() const {
    return firstname;
}
string TournamentMember:: get_secondtName() const {
    return secondname;
}
string TournamentMember:: get_birthdate() const{
    return birthdate;
}
//Print Function
void TournamentMember:: print(){
    cout << endl;
    cout << firstname << " " << secondname << " is " << age << " years old."; 
    cout << " Level of experience is " << experience << ". Plays in "; 
    cout << location << ". Was born on " << birthdate <<". ";
    cout << endl ;
}

