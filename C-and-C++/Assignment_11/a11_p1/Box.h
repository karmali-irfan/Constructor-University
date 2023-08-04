//CH 230-A 
//Irfan Karmali
//i.karmali@jacobs-university.de
//a11_p1

#include <iostream>
using namespace std; 

//Declaring Class
class Box{
    private: //Private 
        double height; 
        double width; 
        double length;
    public: // Public 
        Box(); //default
        Box(double, double, double); 
        //Getter methods
        double get_Volume();
        double get_Height(); 
        double get_Width(); 
        double get_Length();
        //Setter methods
        void set_Height(double); 
        void set_Width(double); 
        void set_Length(double); 
        Box(const Box &);
        ~Box(); 
};