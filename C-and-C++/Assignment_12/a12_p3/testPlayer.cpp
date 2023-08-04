//CH 230-A
//Irfan Karmali 
//a12_p3
//i.karmali@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std; 

//main function
int main(){
    //Player Classes
    Player p1("Neymar","Junior","1992-02-05",29,12,10,"Left Wing",65,"right");
    Player p2("Lionel","Messi","1987-06-24",34,20,30,"Midfielder",70,"left");
    Player p3("Angel","DiMaria","1988-02-14",33,15,11,"Right Wing",54,"left");
    //Print Functions
    p1.print(); 
    p2.print(); 
    p3.print(); 
    TournamentMember:: set_Location("Hamburg"); //changing location
    p1.increment_Goals(); //incrementing goals for p1 only
    //print functions
    p1.print(); 
    p2.print(); 
    p3.print();   
    cout << endl;  
    return 0; 
}