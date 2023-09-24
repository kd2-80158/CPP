/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called printOnConsole() displays the two totals and number of paying as well as non paying cars total. ( write a menu driven code for it)
*/
#include<iostream>
using namespace std;
class Toolbooth
{
  //data members
  unsigned int x;
  unsigned int y;
  double amount;
  
  public:
  //Parameterless constructor
  Toolbooth()
  {
    this->x=0;
    this->y=0;
    this->amount=0;
  }

  //member functions
  void payingCar()
  {
    
    this->x=x+1;
    this->amount=amount+0.50;

  }
  void nopayCar()
  {
    this->y=y+1;
  }
  void printOnConsole()
  {
    cout<<"Total number of cars paying toll: "<<this->x<<endl;
    cout<<"Total number of cars not paying toll: "<<this->y<<endl;
    cout<<"Total amount collected: "<<this->amount<<endl;

  }
};
//Menu
int menu()
{
    int choice;
    cout<<"0. Exit"<<endl;
    cout<<"1. Do you want to pay tool?"<<endl;
    cout<<"2. Not paying tool"<<endl;
    cout<<"3. Print details"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    int ch;
    Toolbooth t;
    while((ch=menu())!=0)
    {
        switch(ch)
        {
            case 1:
            t.payingCar();
            break;
            case 2:
            t.nopayCar();
            break;
            case 3:
            t.printOnConsole();
            break;
            default:
            cout<<"Please enter the correct choice"<<endl;
    }
    }
    cout<<"Thanks for using this app!!!!!!!!!!";
    return 0;
}