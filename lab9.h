//Owen Moloney
//November 6th 2023
//This is a code for a circle and rectangle class for  lab9's
#include<iostream>
#include<cmath>
using namespace std;

class Rectangle{
private:
	double width;
	double length;

public:	
	Rectangle(); 		//Constructor
	void setWidth(double);  //Mutator
	void setLength(double); //Mutator
	double getWidth() const //Accessor 
	{ return width;}   
	
	double getLength() const//Accessor 
	{ return length; }
	
	double getArea() const  //Accessor 
	{ return width *length;}
	
	double getPerimeter() const //Accessor 
	{ return ((2*width)+(2*length)); }
};

class Circle{
private:
	double radius;

public:
	Circle(); 		//Constructor
	void setRadius(double); //Mutator
	double getRadius() const //Accessor 
	{ return radius;}

	double getArea() const   //Accessor 
	{ return (M_PI*(radius*radius));}

	double getCircumfrence() const //Accessor 
	{ return(2*(M_PI*radius));}
	
};
 


