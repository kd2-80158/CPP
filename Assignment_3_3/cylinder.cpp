#include "./cylinder.h"
Cylinder::Cylinder(): radius(0),height(0),volume(0)
  {
    cout<<"Using parameterless/default constructor"<<endl;
  }
Cylinder::Cylinder(double radius,double height):radius(radius),height(height)
  {
    cout<<"Using parameterized constructor"<<endl;
  }
  //member functions
double Cylinder::getRadius()
 { 
    return this->radius;
 }
double Cylinder::getHeight()
{
    return this->height;
}
double Cylinder::getVolume()
{
    return this->volume;
}
void Cylinder::setRadius(double radius)
{
    this->radius=radius;
}
void Cylinder::setHeight(double height)
{
    this->height=height;
}
void Cylinder::printVolume()
{
    volume=3.14*radius*radius*height;
    cout<<"Volume of cylinder is: "<<this->volume<<endl;
}
