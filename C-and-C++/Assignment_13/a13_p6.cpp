//CH 230-A
//Irfan Karmali
//a13_p6
//i.karmali@jacobs-university.de

#include <iostream> 
#include <vector> 
using namespace std; 

int main () {
    //iniitalizing my vector
    vector <int> myvector(20); 
    //Assigning 8 to every vector element
    for (unsigned int i = 0; i < myvector.size(); i++){
        myvector.at(i) = 8;
    }
    //try block 
    try {
        cout << "What element are you trying to access?" << endl; 
        int n ; 
        cin >> n;
        myvector.at(n);
        cout << "The selected memory is within range!" << endl; 
    }
    //catch block
    catch (const out_of_range &error) {
        cout << "Selected memory is out of range of " ;
        cerr <<  error.what() << endl; 
        exit(1); 
    }
    return 0;
}