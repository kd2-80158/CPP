#include <iostream>
using namespace std;
void fact(int n)
{
    int fact = 1;
    if (n < 0)
        throw 1;
    else
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    cout<<"Factorial is: " <<fact;
}
int main()
{
    int n;
    cout << "Enter the number for calculating the factorial" << endl;
    cin >> n;
    try
    {
        fact(n);
    }
    catch (int error)
    {
        cout << "Number should be greater than 0" << endl;
    }
    return 0;
}