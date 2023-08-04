//CH 230-A
//a11_p5.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
using namespace std;

class Shape{
    protected:
        string name; 
    public: 
        Shape(); 
        Shape(const string &); 
        ~Shape(); 
        Shape (const Shape &); 
        void printName() const; 
};

class CenteredShape: public Shape{
    public: 
        CenteredShape();
        CenteredShape(const string &, double, double); 
        CenteredShape(const CenteredShape &);
        ~CenteredShape(); 
    private:
        double x; 
        double y; 
};

class RegularPolygon: public CenteredShape{
    public: 
        RegularPolygon(); 
        RegularPolygon(const string &, double, double, int); 
        ~RegularPolygon(); 
        RegularPolygon(const RegularPolygon &); 
    private: 
        int edges;
}; 

class Circle: public CenteredShape{
    public: 
        Circle();
        Circle(const string&, double, double , double);
        ~Circle(); 
        Circle(const Circle &); 
    private: 
        double r; 
};

class Rectangle: public RegularPolygon{
    public: 
        Rectangle(); 
        Rectangle(const string &, double, double, double, double ); 
        ~Rectangle(); 
        Rectangle(const Rectangle &); 
        double area(); 
        double perimeter(); 
    private: 
        double w, h;
}; 

class Square: public Rectangle{
    public:
        Square(); 
        Square(const string &, double, double, double);
        ~Square(); 
        Square(const Square &); 
        double area(); 
        double perimeter(); 
    private:   
        double side;  
};



