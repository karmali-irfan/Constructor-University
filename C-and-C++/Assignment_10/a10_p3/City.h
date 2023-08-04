//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p3

#include <iostream>
#include <cstring>
using namespace std; 

//Initializing a class
class City {
    private: //Declaring private memebers
        int population; 
        string mayor; 
        double area;
        string name; 
    
    public: //declaring public members
        void set_Population(int newpopulation); 
        void set_Mayor(string newmayor); 
        void set_Area(double newarea); 
        void set_Name(string newname); 
        void print(); 
        int get_Population(); 
        string get_Mayor(); 
        double get_Area();
        string get_Name();
        City(){}; //default class
        City(int n_population, string n_mayor, double n_area, string n_name){
            population = n_population; 
            mayor = n_mayor; 
            area = n_area;
            name = n_name;
        }
}; 
