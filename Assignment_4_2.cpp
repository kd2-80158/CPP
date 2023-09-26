#include<iostream>
using namespace std;
class Stack
{
  int size;
  int top;
  int *arr;

  //parameterized constructor
  public:
  Stack()
  {
    this->size=5;
  }
  Stack(int size)
  {
    arr=new int(size);
    this->size=size;
    top=-1;
  }

  //member functions
  void push(int data)
  {
    if(size-top>1)
    {
        top++;
        arr[top]=data;
    }
    else
    {
        cout<<"Stack Overflow"<<endl;
    }

  }
  void pop()
  {
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        top--;
    }

  }
  int peek()
  {
    if(top==-1)
    {
      return -1;
    }
    else
    {
      return arr[top];
    }
  }
  bool isEmpty()
  {
    if(top==-1)
      return true;
    else
      return false;


  }
bool isFull()
  {
     if(top==size)
       return true;
     else
       return false;  

  }
  void print()
  {
    while(!isEmpty())
    {
        cout<<this->peek()<<endl;
        this->pop();
    }

  }
};
int main()
{
    
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    cout<<"Check whether the stack is empty after using pop: "<<s.isEmpty();
    return 0;
}