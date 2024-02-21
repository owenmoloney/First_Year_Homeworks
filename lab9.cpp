//Owen Moloney
//November 8th, 2023
//This is the maincode for lab 9
#include<iostream>
#include "lab9.h"
using namespace std;

Rectangle::Rectangle()
{
    width = 0.0;
    length = 0.0;
}
void Rectangle::setWidth(double w)
{
	cout<<"Enter the width of the rectangle: ";
	cin>>w;

      if(w>=0)
	width =w;
      else{
        cout<<"Invalid width"<<endl;
        }
      
}
void Rectangle::setLength(double len)
{
	cout<<"Enter the length of the rectangle: ";
	cin>>len;

	if(len >=0)
	   length = len;
	 else
	 { 
	    cout<<"Invlaid length"<<endl;
	 }
}
Circle::Circle()
{
    radius= 0.0;
}
void Circle::setRadius(double r)
{
	cout<<"Enter the radius of the circle: ";
	cin>>r;

      if(r>= 0)
        radius = r;
       else
       {
	   cout<<"Invalid Radius"<<endl;
       }
}

int main()
{
	double r,len,w;

	Rectangle box;
	box.setWidth(w);
	box.setLength(len);

	cout<<"Here is the rectangle's Data:"<<endl;
	cout<<"Width: "<<box.getWidth() <<endl;
	cout<<"Length: "<<box.getLength() <<endl;
	cout<<"Area: "<<box.getArea() <<endl;
	cout<<"Perimeter: "<<box.getPerimeter()<<endl;
	
	Circle ring;
	ring.setRadius(r);
	
	cout<<"Here is the circle's Data:"<<endl;
	cout<<"Radius: "<<ring.getRadius() <<endl;
	cout<<"Area: "<<ring.getArea() <<endl;
	cout<<"Circumfrence: "<<ring.getCircumfrence()<<endl;

return 0;
}
