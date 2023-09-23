#include<iostream>
using namespace std;

class Address
{
private:
  //data members
  string building;
  string street;
  string city;
  int pin;

  public:
  //parameterless constructor
  Address()
  {
    this->building="";
    this->street="";
    this->city="";
    this->pin=000000;
  }
  //Parameterized constructor
  Address(string building,string street,string city,int pin)
  {
    this->building=building;
    this->street=street;
    this->city=city;
    this->pin=pin;
    
  }
  //member function
  void accept()
  {
     cout<<"Enter the building name"<<endl;
     cin>>this->building;
     cout<<"Enter the street name"<<endl;
     cin>>this->street;
     cout<<"Enter the city name"<<endl;
     cin>>this->city;
     cout<<"Enter the pincode"<<endl;
     cin>>this->pin;

  }
  void display()
  {
    cout<<"Building name: "<<this->building<<endl;
    cout<<"Street name: "<<this->street<<endl;
    cout<<"City name: "<<this->city<<endl;
    cout<<"Pincode: "<<this->pin<<endl;

  }
  
  //setter or mutator
  void set_building(string building)
{
    this->building=building;
}
 void set_street(string street)
 {
    this->street=street;
 }
 void set_city(string city)
 {
    this->city=city;
 }
 void set_pincode(int pin)
 {
    this->pin=pin;
 }
 //getter or inspector
 string get_building()
 {
    return this->building;
 }
 string get_street()
 {
    return this->city;
 }
 string get_city()
 {
    return this->city;
 }
  int get_pincode()
 {
    return this->pin;
 }
};
int menu()
{
    int choice;
    cout<<"*************************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Insert details"<<endl;
    cout<<"2.Display details"<<endl;
    cout<<"3.Check getters"<<endl;
    cout<<"4.Check setters"<<endl;
    cout<<"5.Call Parameterized contructor"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    cout<<"*************************"<<endl;
    return choice;

}

int main()
{
    int ch;
    Address a;
    Address a1("Malabar","PK Marg","Delhi",202301);
    
    while((ch=menu())!=0)
    {
        switch(ch)
        {
            case 1:
            a.accept();
            break;
            case 2:
            a.display();
            break;
            case 3:
            cout<<"Address Information"<<endl;
            cout<<"Building name: "<<a.get_city()<<endl;
            cout<<"Street name: "<<a.get_city()<<endl;
            cout<<"City name: "<<a.get_city()<<endl;
            cout<<"Pincode: "<<a.get_city()<<endl;
            break;
            case 4:
            a.set_building("Eros");
            a.set_street("Nehru Place");
            a.set_city("West Delhi");
            a.set_pincode(110001);
            a.display();

            break;
            case 5:
            
            a1.display();
            default:
            cout<<"Please enter the correct choice"<<endl;
            break;

        }
    }
    cout<<"Thanks for using our APP!!!!!!!!!!!!"<<endl;

    return 0;
}