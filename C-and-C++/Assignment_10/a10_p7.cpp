//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a10_p7

#include <iostream>
#include <cstring>  
using namespace std;

//Initializing a Class
class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
    void funcByRef(NaiveString &s);
    ~NaiveString();
};

//Destructor String
NaiveString :: ~NaiveString(){
    cout << "Calling Destructor string for " << str << endl;
    delete str; 
}
//Setting a string dynamically
NaiveString::NaiveString(const char *t) {
    cout << "Calling Naive string." << endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}
//Copy Constructor
NaiveString::NaiveString(const NaiveString &src) {
    cout << "Calling copy constructor." << endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
}
//Updating/replacing chars
void NaiveString::update(char oldchar, char newchar) {
    cout << "Calling function to replace chars." << endl;
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}
//Function to print
void NaiveString::print() {
     cout << "Calling function to print string:" << endl;
	cout << str << endl;
}
//Passing by value function
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called." << endl;
	s.update('B', 'C');
	s.print();
}
//Passing by ref function
void funcByRef(NaiveString &s) {
	cout << "funcbyref() being called." << endl;
	s.update('B', 'C');
	s.print();
}

int main()
{
    {
        cout << endl;
        //Initializing Classes
        NaiveString a("QWERTYUIBC"); 
        NaiveString b("ZXCVBNM"); 
        cout << endl; 
        cout << "Function call by value:" << endl;
        funcByVal(a); //passing by value
        funcByVal(b); //passing by value
        cout << endl;
        cout << "Function call by Reference:" << endl;
        funcByRef(b); //passing by ref 
        funcByRef(a); //passing by ref
        cout << endl;
    }


    return 0;
}