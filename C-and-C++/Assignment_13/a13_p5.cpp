//CH 230-A 
//Irfan Karmali
//a13_p5
//i.karmali@jacobs-university.de

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
    public:
    D():A(10){ }
};
 
int main()
{
    D d;
    d.print();
    return 0;
    //'A' needs to be direclty initialized in 'D' since its virtual inheritance
    //The solution is to directly initilize 'A' in 'D'
}