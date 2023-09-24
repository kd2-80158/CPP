#include "./menu.h"
#include<iostream>
using namespace std;
Emenu menu()
{
    int choice;
    cout<<"*******************************************"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Using getter"<<endl;
    cout<<"2. Using setter"<<endl;
    cout<<"3. Using parameterized constructor"<<endl;
    cout<<"Enter your choice"<<endl;
    cout<<"********************************************"<<endl;
    cin>>choice;
    return Emenu(choice);
}