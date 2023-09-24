#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
using namespace std;
class Cylinder
{
    private:
  //data member
  double radius;
  double height;
  double volume;

  //constructor
  public:
  Cylinder();
  Cylinder(double radius,double height);
  double getRadius();
  double getHeight();
  double getVolume();
  void setRadius(double radius);
  void setHeight(double height);
  void printVolume();
};

#endif