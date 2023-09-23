//Q1. Write a menu driven program to calculate volume of the box(length * width * height). Provide necessary constructors.

#include<iostream>
using namespace std;
class Volume
{   
    private:
    //data members
    double length;
    double width;
    double height;
    double volume;
    
    public:
    //parameterless constructor
    Volume()
    {
        this->length=1;
        this->width=1;
        this->height=1;
    }

    //parameterized constructor
     Volume(double length,double width,double height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    //member functions
    void acceptData()
    {
        cout<<"Enter the length of the box"<<endl;
        cin>>this->length;
        cout<<"Enter the width of the box"<<endl;
        cin>>this->width;
        cout<<"Enter the height of the box"<<endl;
        cin>>this->height;

    }
    //calculate volume
    double calculate()
    {
        this->volume=length*width*height;
        return this->volume;
    }
    void display()
    {
        cout<<"Volume: "<<this->volume<<endl;
    }
};

int menu()
{
  int choice;
  cout<<"***********************************"<<endl;
  cout<<"Following are the choices you have"<<endl;
  cout<<"0.Exit"<<endl;
  cout<<"1.Insert data"<<endl;
  cout<<"2.Calculate volume"<<endl;
  cout<<"3.Insert data through parameterized constructor"<<endl;
  cout<<"***********************************"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>choice;
  return choice;
}

int main()
{
    Volume v;
    Volume v1(12,10,10);
    int ch;
    while((ch=menu())!=0)
    {
     switch(ch)
     {
        case 1:
        v.acceptData();
        break;
        case 2:
        v.calculate();
        v.display();
        break;
        case 3:
        v1.calculate();
        v1.display();
        break;
     }
    }
    cout<<"Thanks for using our app!!!!!!!!!!!!"<<endl;
    return 0;

}