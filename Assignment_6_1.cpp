#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return this->day;
    }
    int get_month()
    {
        return this->month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    bool is_leap_year(int year)
    {
        if ((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
    void accept()
    {
        cout << "Enter day: ";
        cin >> this->day;
        cout << "Enter month: ";
        cin >> this->month;
        cout << "Enter year: ";
        cin >> this->year;
    }
    void display()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
        cout<<"Leap year: "<<is_leap_year(year)<<endl;
    }
};
class Employee
{
    int id;
    float sal;
    string dept;
    Date doj; // Association -composition
public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int get_id()
    {
        return this->id;
    }
    int get_sal()
    {
        return this->sal;
    }
    string get_dept()
    {
        return this->dept;
    }
    Date get_joining_date()
    {
        return this->doj;
    }
    void set_day(int id)
    {
        this->id = id;
    }
    void set_sal(int sal)
    {
        this->sal = sal;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }
    void set_joining_date(Date doj)
    {
        this->doj = doj;
    }
    void accept()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter sal: ";
        cin >> sal;
        cout << "Enter department: ";
        cin >> dept;
        cout<<"Enter date of joining"<<endl;
        doj.accept();
    }
    void display()
    {
        cout << "Employee id: " << this->id << endl;
        cout << "Employee salary: " << this->sal << endl;
        cout << "Employee department: " << this->dept << endl;
        doj.display();
    }
};
class Person
{
    string name;
    string addr;
    Date dob; // Association - Composition
public:
    Person()
    {
        this->name = "";
        this->addr = "";
    }
    Person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->addr = addr;
    }
        string get_name()
    {
        return this->name;
    }
    string get_addr()
    {
        return this->addr;
    }
    Date get_birth_date()
    {
        return this->dob;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }
    void set_birth_date(Date dob)
    {
        this->dob = dob;
    }
    void accept()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter addr: ";
        cin >> addr;
        dob.accept();
    }
    void display()
    {
        cout << "Person name: "<<this->name<<endl;
        cout << "Employee address: "<<this->addr<<endl;
        cout<<"Date of birth is: ";
        dob.display();
    }
};

int main()
{
    // Employee e;
    // e.accept();
    // e.display();

    Person p;
    p.accept();
    p.display();
    // // cout<<p.get_addr();
    // // cout<<p.get_name();
    // // p.set_birth_date(Date(12,22,2024));
    // // p.get_birth_date();
    // p.display();

    Date d;
    // d.set_year(2022);
    // d.get_year();
    // cout<<d.is_leap_year(2020);


    return 0;
}