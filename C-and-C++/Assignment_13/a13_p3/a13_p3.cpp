//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a13_p3

#include <iostream>
#include <fstream>
using namespace std; 

int main () {
    int n; 
    cout << "Enter number of files: ";
    cin >> n; //keyboard input for number of files
    getchar();
    string str[n]; 
    //for loop for user input of the names of files
    for (int i = 0; i < n ; i++){
        cout << "Enter name of file: "; 
        getline (cin, str[i]);  
    }
    //opening output file 
    ofstream out("concatn.txt"); 
    //for loop for copying concatenating files
    for (int i = 0; i < n; i++){
        ifstream in(str[i]);
        if (!in.is_open()){
            cerr << "Error in opening file" << endl; 
            exit (i);
        }
        while ( !in.eof() ){
            char c = in.get(); 
            // char c; 
            // in >> c;
            if (c != EOF){
                out << c; 
            }
            if (c == EOF){
                out << "\n";
                break;
            }
        }
        in.close();
    }

    //closing files
    out.close(); 

    return 0;
}