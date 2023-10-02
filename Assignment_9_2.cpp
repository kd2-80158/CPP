// Q2. Write a class to store Account information of Bank customer by using following class diagram. Use enum to store information of account type. Create an array of 5 Accounts in main() and accept their details from user. Write Menu driven program to deposit/withdraw amount from the account. After each transaction display updated account balance. Provide appropriate getters/setters with necessary validations. Throw exceptions for invalid values. Also implement an exception class InsufficientFunds. In withdraw() member function, if sufficient balance is not available
// in account, throw this exception.
#include <iostream>
using namespace std;
int amount;
class insufficient_funds
{
protected:
   int accid;
   double cur_balance;
   double withdraw_amount;

public:
   insufficient_funds()
   {
      this->accid = 0;
      this->cur_balance = 0;
      this->withdraw_amount = 0;
   }
   insufficient_funds(int accid, double cur_balance, double withdraw_amount)
   {
      this->accid = accid;
      this->cur_balance = cur_balance;
      this->withdraw_amount = withdraw_amount;
   }
   void display()
   {
      cout << "ERROR DUE TO INSUFFICIENT FUND" << endl;
      cout << "Not able to withdraw Rs " << this->withdraw_amount << " as you have only" << this->cur_balance << "funds in your Bank Account." << endl;
   }
   void display_exp2()
   {
      cout << "amount cannot be equal to or less than zero" << endl;
   }
};

enum account_type
{
   EXIT,
   SAVING,
   CURRENT,
   DMAT
};

class Account
{
private:
   int id;
   account_type type;
   double balance;

public:
   Account()
   {
      this->id = 0;
      this->balance = 0;
   }
   Account(int id, account_type type, double balance) : type(type)
   {
      this->id = id;
      this->balance = balance;
      this->type = type;
   }
   void accept()
   {

      cout << "Enter id: ";
      cin >> id;

      cout << "Enter balance: ";
      cin >> balance;
   }
   void display()
   {
      cout << "Customer's ID: " << this->id << endl;
      cout << "Customer Balance: " << this->balance << endl;
   }

   void set_id(int id)
   {
      this->id = id;
   }
   void set_type(account_type type)
   {
      this->type = type;
   }
   void set_balance(double balance)
   {
      this->balance = balance;
   }
   int get_id()
   {
      return this->id;
   }
   account_type get_type()
   {
      return this->type;
   }
   double get_balance()
   {
      return this->balance;
   }
   void deposit(double amount)
   {
      if (amount <= 0)
         throw insufficient_funds(this->id, this->balance, amount);
      this->balance += amount;
      cout << "Updated account balance: " << this->balance << endl;
   }
   void withdraw(double amount)
   {
      if (amount <= 0)
         throw insufficient_funds(this->id, this->balance, amount);
      if (amount > this->balance)
         throw insufficient_funds(this->id, this->balance, amount);
      this->balance -= amount;
      cout << "Updated account balance: " << this->balance << endl;
   }
};

account_type Emenu()
{
   int choice;
   cout << "***********************" << endl;
   cout << "0. Exit" << endl;
   cout << "1. Deposit/Withdraw Amount on Saving" << endl;
   cout << "2. Deposit/Withdraw Amount on Current" << endl;
   cout << "3. Deposit/Withdraw Amount on DMAT" << endl;
   cout << "4.Display info of all type of accounts" << endl;
   cout << "***********************" << endl;
   cout << "Enter your choice" << endl;
   cin >> choice;
   return account_type(choice);
}

int main()
{
   int ch;
   int index = 0;
   int amount;
   int ans;
   int accno;
   Account *acc[5];
   while ((ch = Emenu()) != EXIT)
   {
      switch (ch)
      {
      case SAVING:
         if (index < 5)
         {
            acc[index] = new Account();
            acc[index]->accept();
            int accno;
            cout << "Enter your accno to update: " << endl;
            cin >> accno;
            if (acc[index]->get_id() == accno)
            {

               cout << "Enter 1 for deposit or 2 for withdraw" << endl;
               cin >> ans;
               if (ans == 1 && acc[index]->get_id() == accno)
               {
                  cout << "Enter the amount you want to deposit" << endl;
                  cin >> amount;
                  try
                  {
                     acc[index]->deposit(amount);
                  }
                  catch (insufficient_funds error)
                  {
                     error.display_exp2();
                  }
               }
                  else if (ans == 2 && acc[index]->get_id() == accno)
                  {
                     cout << "Enter the amount you want to withdraw" << endl;
                     cin >> amount;
                     try
                     {
                        acc[index]->withdraw(amount);
                     }
                     catch (insufficient_funds error)
                     {
                        error.display();
                        error.display_exp2();
                     }
                  }
               else
               {
                  cout << "Account not found" << endl;
               }
               index++;
            }
            break;
         }
      case CURRENT:
         if (index < 5)
         {
            acc[index] = new Account();
            acc[index]->accept();
            int accno;
            cout << "Enter your accno to update: " << endl;
            cin >> accno;
            if (acc[index]->get_id() == accno)
            {

               cout << "Enter 1 for deposit or 2 for withdraw" << endl;
               cin >> ans;
               if (ans == 1 && acc[index]->get_id() == accno)
               {
                  cout << "Enter the amount you want to deposit" << endl;
                  cin >> amount;
                  try
                  {
                     acc[index]->deposit(amount);
                  }
                  catch (insufficient_funds error)
                  {
                     error.display_exp2();
                  }
               }
                  else if (ans == 2 && acc[index]->get_id() == accno)
                  {
                     cout << "Enter the amount you want to withdraw" << endl;
                     cin >> amount;
                     try
                     {
                        acc[index]->withdraw(amount);
                     }
                     catch (insufficient_funds error)
                     {
                        error.display();
                        error.display_exp2();
                     }
                  }
               else
               {
                  cout << "Account not found" << endl;
               }
               index++;
            }
            break;
         }
      case DMAT:
         if (index < 5)
         {
            acc[index] = new Account();
            acc[index]->accept();
            int accno;
            cout << "Enter your accno to update: " << endl;
            cin >> accno;
            if (acc[index]->get_id() == accno)
            {

               cout << "Enter 1 for deposit or 2 for withdraw" << endl;
               cin >> ans;
               if (ans == 1 && acc[index]->get_id() == accno)
               {
                  cout << "Enter the amount you want to deposit" << endl;
                  cin >> amount;
                  try
                  {
                     acc[index]->deposit(amount);
                  }
                  catch (insufficient_funds error)
                  {
                     error.display_exp2();
                  }
               }
                  else if (ans == 2 && acc[index]->get_id() == accno)
                  {
                     cout << "Enter the amount you want to withdraw" << endl;
                     cin >> amount;
                     try
                     {
                        acc[index]->withdraw(amount);
                     }
                     catch (insufficient_funds error)
                     {
                        error.display();
                        error.display_exp2();
                     }
                  }
               else
               {
                  cout << "Account not found" << endl;
               }
               index++;
            }
            break;
         }
      case 4:
         if (index < 5)
         {
            for (int i = 0; i < index; i++)
            {

               acc[i]->display();

            }
         }
         break;
      }
   }
}