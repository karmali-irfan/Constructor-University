//CH 230-A
//Irfan Karmali
//i.karmali@jacobs-university.de
//a13_p4

#include<iostream>
using namespace std;
 
class A{
int x;
    public:
        void setX(int i) {
            x = i;
        }
        void print() { 
            cout << x << endl;
        }
};
 
class B:  public virtual A {
    public:
        B() { 
            setX(20); 
        }
};
 
class C:  public virtual A {
    public:
        C() { 
            setX(10); 
        }
};
 
class D: public B, public C{
    // public:
    //     D(){
    //         setX(30);
    //     }
};
 
int main()
{
    D d;
    d.print();
    return 0;

    //Ambiguity error the compiler does not know which X to print; 
    //The amibuity can be fixed if the Classes and C were inherited virtually
    //This would solve the problem of ambuguity
    //You could also choose to declare another X in the class D and the program
    //will still run, however I commented it out in this example, wasn't sure 
    //if that's what we were supposed to do.
    
    
}