//CH 230-A 
//Irfan Karmali
//i.karmali@jacobs-university.de 
//a13_p1

#include <iostream> 
#include <fstream> 
#include <cstring>
#include <string>
using namespace std; 

int main () {
    string name, name2, name3; 
    name = "input.txt"; 
    name2 = "input1.txt";
    name3 = "input_copy.txt";

    fstream file1; //opening files in an both modes (read and write)
    ifstream file2; //opening files in read mode "i stands for input into the code"
    ofstream file3; //opening files in write mode "o stands for output from of the code"

    file1.open(name, ios::in); 
    //ios::in chooses the input stream of the code, in this case it's 'in' since something is coming into the code 
    if (!file1.is_open()){
        cerr << "Error accessing file 1" << endl;
        exit (1);
    }
    file2.open(name2); 
    //ios::in chooses the input stream of the code, in this case it's 'in' since something is coming into the code 
    //But, you don't need to since ifstream means the exact same thing
    if (!file2.is_open()){
        cerr << "Error accessing file 2" << endl;
        exit (2);
    }
    file3.open(name3);
    if (!file3.is_open()){
        cerr << "Error accessing file 3" << endl;
        exit (3);
    }

    while (!file1.eof()){
        char c = file1.get();
        if (c != EOF){ //this is important, the condition is important
        file3 << c ;
        }
    }

    while (!file2.eof()){
        char c = file2.get();
        if (c != EOF) { 
        file3 << c ;
        }
    }


    return 0;



}