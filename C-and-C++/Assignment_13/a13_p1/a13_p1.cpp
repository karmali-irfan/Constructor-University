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
    char file[50], copy[50];
    cout << "Enter name of file: ";
    cin >> file;
    int i = 0;
 
    //Creating the name of the copyfile
    while (file[i] != '.'){
        copy[i] = file[i];
        i++;
    }
    strcat(copy, "_copy.txt");
    int len = strlen(copy);
    char copy1[len - 1]; 
    strcpy(copy1, copy);
   
 
    fstream file1, copyfile; 
    file1.open(file, ios::in);
    copyfile.open(copy, ios::out); 
    //while loop for copying file content onto other file
    while(!file1.eof()) {
        char c = file1.get();
        if (c!=EOF)
        copyfile << c;
    }
    
    //closing files
    file1.close();
    copyfile.close();
    return 0;
}