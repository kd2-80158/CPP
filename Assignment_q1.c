#include<stdio.h>

struct Date
{
   
   int day;
   int month;
   int year; 
   };
void initDate(struct Date* ptrDate)
   {
    ptrDate->day=10;
    ptrDate->month=10;
    ptrDate->year=2023;
   }
void printDateOnConsole(struct Date* ptrDate)
{
   printf("%d-%d-%d",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateOnConsole(struct Date* ptrDate)
{ 
   scanf("%d\n",&ptrDate->day);
   scanf("%d\n",&ptrDate->month);
   scanf("%d",&ptrDate->year);

}
int main()
{
    int i;
    struct Date ptrDate;
    do
    {
        printf("\n");
        printf("1.Initialize Date\n");
        printf("2.Print Date\n");
        printf("3.Accept Date\n");
        printf("\n");

        printf("Enter your choice\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            initDate(&ptrDate);
            break;

            case 2:
            printDateOnConsole(&ptrDate);
            break;

            case 3:
            acceptDateOnConsole(&ptrDate);
            break;
            
            default:
            printf("Please enter the correct value\n");
            break;

        }

    } while (i!=0);
    
    return 0;
}