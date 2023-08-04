//CH 230-A
//a11_p5.cpp
//Irfan Karmali
//i.karmali@jacobs-university.de

#include <iostream> 
#include "Shapes.h"

using namespace std; 

Shape:: Shape()
{
    name = "no name";
}

Shape:: Shape(const string &nn): name(nn){
} 

Shape:: Shape (const Shape &copy){
    name = copy.name; 
}

void Shape:: printName() const{
    cout << name << endl; 
} 

Shape:: ~Shape(){

} 


CenteredShape:: CenteredShape(): Shape(){
    x = 0;
    y = 0; 
}

CenteredShape:: CenteredShape(const string &n, double nx, double ny): Shape(n){
    x = nx; 
    y = ny; 
} 

CenteredShape:: CenteredShape(const CenteredShape &copy){
    x = copy.x; 
    y = copy.y;
}

CenteredShape:: ~CenteredShape(){
}


RegularPolygon:: RegularPolygon(){
    edges = 0 ;
}

RegularPolygon:: RegularPolygon(const string &n, double nx, double ny, int ne): 
                CenteredShape(n, nx, ny)
{
    edges = ne;
}

RegularPolygon:: ~RegularPolygon(){
}

RegularPolygon:: RegularPolygon(const RegularPolygon &copy){
    edges = copy.edges; 
}


Circle:: Circle(){
    r = 0;
}
Circle:: Circle(const string &n, double nx, double ny, double nr): 
                CenteredShape(n, nx, ny)
{
    r = nr;
}

Circle:: ~Circle(){

}

Circle:: Circle(const Circle &copy){
    r = copy.r;
}



Rectangle:: Rectangle(){
    w = 0;
    h = 0; 
}

Rectangle:: Rectangle(const string &n, double nx, double ny, double nh, double nw):
            RegularPolygon(n, nx, ny, 4)
{
    w = nw; 
    h = nh; 
}
Rectangle:: ~Rectangle(){
}

Rectangle:: Rectangle(const Rectangle &copy){
    w = copy.w; 
    h = copy.h;
}

double Rectangle:: area(){
    return (w * h);
}

double Rectangle:: perimeter(){
    return (2*h + 2*w);
} 



Square:: Square(){
    side = 0; 
}
Square:: Square(const string &n, double nx, double ny, double ns):
                Rectangle(n, nx, ny, ns, ns)
{
    side = ns;
}
Square:: ~Square(){

}
Square:: Square(const Square &copy){
    side = copy.side;

}
double Square:: area(){
    return (side * side); 
} 
        
double Square:: perimeter(){
    return 4*side;
}