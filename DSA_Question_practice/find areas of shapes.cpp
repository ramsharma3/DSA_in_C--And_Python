#include <iostream>
using namespace std;
#define pi 3.14
int reactangle(int l, int b){
    return l*b;
}
int circle (double r){
    return pi*r*r;
}
int square(double s){
    return s*s;
}//2πr^2 + 2πrh
int cylinder(double rc, double h ){
    return 2*pi*rc*rc + 2*pi*rc*h;
}
int cube(double side){
    return 6*side*side;
}
int sphere(double r){
    return 4*pi*r*r;
}
int cuboid(double h, double w , double l){
    return 2*(l*w+w*h+l*h);
}

int main(){
    int n;
    cout<<"Choose s.no the shape whose area you want to find : "<<endl;
    cout<<"1. For circle"<<endl;
    cout<<"2. For rectangle"<<endl;
    cout<<"3. For square"<<endl;
    cout<<"4. For cylinder"<<endl;
    cout<<"5. For cube"<<endl;
    cout<<"6. For sphere"<<endl;
    cout<<"7. For cuboid"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
    double r;
    cout<<"Please enter the radius : "<<endl;
    cin>>r;
    cout<<circle(r);
    break;
    case 2:
    double l , b;
    cout<<"Enter the length of rectangel : "<<endl;
    cin>>l;
    cout<<"Enter the breadth of ractangle : "<<endl;
    cout<<reactangle(l,b);
    break;
    case 3:
    double side; 
    cout<<"Enter the side of square : "<<endl;
    cin>>side;
    cout<<square(side);
    break;
    case 4 :
    double rad, high;
    cout<<"Enter the radius of cylinder : "<<endl;
    cin>>rad;
    cout<<"Enter the hieght of cylinder : "<<endl;
    cin>>high;
    cout<<cylinder(rad,high);
    break;
    case 5 :
    double side1;
    cout<<"Enter the side of cube : "<<endl;
    cin>>side1;
    cout<<cube(side1);
    break;
    case 6:
    double radius;
    cout<<"Enter the radius of sphere : "<<endl;
    cin>>radius;
    cout<<sphere(radius);
    break;
    case 7:
    double l1,w1,h1;
    cout<<"Enter the length of cuboid : "<<endl;
    cin>>l1;
    cout<<"Enter the width of cuboid : "<<endl;
    cin>>w1;
    cout <<"Enter the hieght of cuboid : "<<endl;
    cin>>h1;
    cout<<cuboid(l1 , w1 , h1);
    break;


    
    default:
    cout<<"Please Enter valid Input!!"<<endl;
    break;
    }
    return 0;

}