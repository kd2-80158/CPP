#include<iostream>

class Date
{
   //data members
   int day;
   int month;
   int year; 

   //member functions
   public:
   void initDate()
   {
    this->day=10;
    this->month=10;
    this->year=2023;
   }
void printDateOnConsole()
{
   printf("%d-%d-%d",this->day,this->month,this->year);
}
void acceptDateOnConsole()
{ 
   scanf("%d",day);
   scanf("%d",month);
   scanf("%d",year);
}
bool isLeapYear()
   {
    int result=this->year;
    if(result%4==0 || result%400==0)
    {
      return true;
    }
    else
    {
      return false; 
    }  
}
};
int main()
{
    int i;
    Date ptrDate;
    do
    {
        printf("\n");
        printf("1.Initialize Date\n");
        printf("2.Print Date\n");
        printf("3.Accept Date\n");
        printf("4.Check whether the given year is a leap year\n");
        printf("\n");

        printf("Enter your choice\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
             ptrDate.initDate();
             break;

            case 2:
             ptrDate.printDateOnConsole();
             break;

            case 3:
             ptrDate.acceptDateOnConsole();
             break;

            case 4:
             bool x;
             x=ptrDate.isLeapYear();
             printf("%d",x);
             break;
            
            default:
            printf("Please enter the correct value\n");
            break;

        }

    } while (i!=0);
    
    return 0;
}