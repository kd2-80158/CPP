#include<iostream>
#include<string>
using namespace std;

class Student
{
  private:

  int rollno;
  string name;
  int marks;

  public:
  void initStudent()
  {
    rollno=1;
    name="Saurabh Chandra Chhimwal";
    marks=100;

  }
  void printStudentOnConsole()
  {
    cout<<"Rollno: "<<rollno<<" "<<"Name: "<<name<<" "<<"Marks: "<<marks<<endl;
  }
  void acceptStudentFromConsole()
  {
    cout<<"Enter your rollno"<<endl;
    cin>>rollno;
    cout<<"Enter your full name"<<endl;
    cin>>name;
    cout<<"Enter your marks"<<endl;
    cin>>marks;

  }

};
int main()
{
  Student s;
  int i;
  do
  {
        cout<<"1.Initialize Date"<<endl;
        cout<<"2.Print Date"<<endl;
        cout<<"3.Accept Date"<<endl;

        cout<<"Enter your choice"<<endl;
        cin >> i;

        switch(i)
        {
            case 1:
            s.initStudent();
            break;

            case 2:
            s.printStudentOnConsole();
            break;

            case 3:
            s.acceptStudentFromConsole();
            break;

            default:
            cout<<"Please enter the correct choice"<<endl;
            break;
        }

  } while (i!=0);

  return 0;
}