//CH 230-A
//Irfan Karmali 
//a12_p2
//i.karmali@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std; 



//main function
int main(){
    //Class Variables
   TournamentMember a("Irfan", "Karmali", "2001-11-21", 12, 12);
   TournamentMember b("Neymar", "Junior", "1994-10-16", 12, 12);
   a.print(); //printing 
   b.print(); //printing
   TournamentMember:: set_Location("Brazil"); //statically changing location
    a.print(); //printing 
    b.print(); //printing

    return 0; 
}