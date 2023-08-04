//CH 230-A 
//Irfan Karmali
//a13_p7
//i.karmali@jacobs-university.de

#include <iostream>
#include <exception>
using namespace std; 
//Creating class own exception
class OwnException: public exception {
    private: 
     string str; 
    public:
        OwnException(string str1){
            str = str1; 
        }
    string what(){
        return "Own Exception\n";
    }
};
//int_parameter class 
void int_parameter(int a){
    if (a == 1){
        throw 'a';
    }
    else if (a == 2){
        throw 12; 
    }
    else if (a == 3){
        throw true;
    }
    else {
        throw OwnException("Own Exception"); 
    }
}

int main (){
    //trying different parameters with theit catches
    try {
        int_parameter(1);
    }
    catch (char a){
        cerr << "Error caught in main function: " << a << endl;  
    }

    try {
        int_parameter(2);
    }
    catch (int b){
        cerr << "Error caught in main function: " << b << endl;  
    }

    try {
        int_parameter(3);
    }
    catch (bool c){
        cerr << "Error caught in main function: " << c << endl;  
    }

    try {
        int_parameter(4);
    }
    catch (OwnException &d){
        cerr << "Error caught in main function: " << d.what() << endl; 
    }



    return 0;
}