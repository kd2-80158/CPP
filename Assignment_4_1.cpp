// Q1. Write a class for Time and provide the functionality Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.
#include<iostream>
using namespace std;
class Time
{ 
    //data members
    private:
    int h;
    int m;
    int s;

    //constructor
    public:
    Time()
    {
        this->h=0;
        this->m=0;
        this->s=0;

    }
    Time(int h,int m, int s)
    {
       this->h=h;
       this->m=m;
       this->s=s;
    }
    //getter
    int getHour()
    {
        return this->h;
    }
    int getMinute()
    {
        return this->m;
    }
    int getSeconds()
    {
        return this->s;
    }
    //setter
    void setHour()
    {
      cout<<"Enter the hour: "<<endl;
      cin>>this->h;
    }
    void setMinute()
    {
        cout<<"Enter the min: "<<endl;
        cin>>this->m;
    }
    void setSeconds()
    {
        cout<<"Enter the sec: "<<endl;
        cin>>this->s;
    }
    //facilitator
    void printTime()
    {
        cout<<"Time is= "<<h<<":"<<m<<":"<<s<<endl;
    }
};

int main()
{
    //local variable that fetch the user's value
    int n;
    cout<<"Enter the number of elements for an array"<<endl;
    cin>>n;
    //Dynamic creation of objects
    Time **t = new Time *[n];
    for (int i = 0; i < n; i++){
            t[i]=new Time();
        }
    //call setter
    for(int i=0;i<n;i++)
    {
        t[i]->setHour();
        t[i]->setMinute();
        t[i]->setSeconds();
        cout<<"Value at t.hr: "<<t[i]->getHour()<<endl;
        cout<<"Value at t.min: "<<t[i]->getMinute()<<endl;
        cout<<"Value at t.sec: "<<t[i]->getSeconds()<<endl;
    }
    //Printing the array
    cout<<"Printing the dynamic array"<<endl;
    for(int i=0;i<n;i++)
    {
        t[i]->printTime();
    }
     for(int i=0;i<n;i++)
        {
            delete t[i];
            
        }
        delete[] t;

    return 0;
}