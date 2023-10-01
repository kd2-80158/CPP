#include <iostream>
using namespace std;
class Product
{
    //data members
protected:
    int id;
    string title;
    double price;
    string type;

public:
    virtual void accept() = 0;
    virtual void display() = 0;

    //getter or inspector
    string getType_book()
    {
        return this->type;
    }
    double getPrice_book()
    {
        return this->price;
    }
    string getType_tape()
    {
        return this->type;
    }
    double getPrice_tape()
    {
        return this->price;
    }
};
class Book : public Product
{
    //data member
private:
    string author;

public:
    //Default constructor
    Book()
    {
        this->author = "";
        this->type = "B";
    }
    //facilitator
    void accept()
    {
        cout << "Enter id: ";
        cin >> this->id;
        cout << "Enter title: ";
        cin >> this->title;
        cout << "Enter price: ";
        cin >> this->price;
        cout << "Enter Author Name: ";
        cin >> this->author;
    }
    void display()
    {
        cout << "Enter id: " << this->id << endl;
        cout << "Enter title: " << this->title << endl;
        cout << "Enter price: " << this->price << endl;
        cout << "Author name: " << this->author << endl;
    }
    //getters or inspectors
    string getType_book()
    {
        return this->type;
    }
    double getPrice_book()
    {
        return this->price;
    }
};
class Tape : public Product
{
    //data member
private:
    string artist;

public:
    //Default constructor
    Tape()
    {
        this->artist = "";
        this->type = "T";
    }
    //facilitator
    void accept()
    {
        cout << "Enter id: ";
        cin >> this->id;
        cout << "Enter title: ";
        cin >> this->title;
        cout << "Enter price: ";
        cin >> this->price;
        cout << "Enter Artist Name: ";
        cin >> this->artist;
    }
    void display()
    {
        cout << "Enter id: " << this->id << endl;
        cout << "Enter title: " << this->title << endl;
        cout << "Enter price: " << this->price << endl;
        cout << "Artist name: " << this->artist << endl;
    }
    //getters or inspectors
    string getType_tape()
    {
        return this->type;
    }
    double getPrice_tape()
    {
        return this->price;
    }
};
//global function
int menu()
{
    int choice;
    cout << "******************" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Book" << endl;
    cout << "2. Accept Tape" << endl;
    cout << "3. Calculate" << endl;
    cout << "4. Display only tapes / books" << endl;
    cout << "******************" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
double calculateBill(Product *ptr[],int index)
{
    double sum = 0;
    for (int i = 0; i < index; i++)
    {
        if ((ptr[i]->getType_book()) == "B")
        {
            sum = sum + ptr[i]->getPrice_book() - ptr[i]->getPrice_book()*0.10;
        }
        else if((ptr[i]->getType_tape()) == "T")
        {
            sum = sum + ptr[i]->getPrice_tape() - ptr[i]->getPrice_tape()*0.05;
        }
    }
    return sum;
}

int main()
{
    int index = 0;
    double result = 0;
    Product *arr[3];
    int ch;
    while ((ch = menu()) != 0)
    {
        switch (ch)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full, can't update" << endl;
            }
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full, can't update" << endl;
            }
            break;

        case 3:
            result = calculateBill(arr,index);
            cout << "Calculate bill is: " << result << endl;
            break;

        case 4:
            for (int i = 0; i < index; i++)
            {
                arr[i]->display();   
            }
            break;

        default:
            cout << "Wrong entry......." << endl;
            break;
        }
    }
    //deallocate the dynamic memory
    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }
    return 0;
}