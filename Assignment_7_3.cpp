#include <iostream>
using namespace std;
class Employee
{
protected:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->designation="";
    }
    Employee(int id, float sal,string designation)
    {
        this->id = id;
        this->sal = sal;
        this->designation=designation;
    }
    int get_id()
    {
        return this->id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    string get_designation_M()
    {
        return this->designation;
    }
    string get_designation_S()
    {
        return this->designation;
    }
    string get_designation_SM()
    {
        return this->designation;
    }
    virtual void accept()
    {
        cout << "Enter Employee's id: ";
        cin >> this->id;
        cout << "Enter Employee's salary: ";
        cin >> this->sal;
        cout << "Enter employee Designation: ";
        cin >> this->designation;
    }
    virtual void display()
    {
        cout << "Employee's id: " << this->id << endl;
        cout << "Employee's salary: " << this->sal << endl;
        cout << "Employee's designation: " << this->designation << endl;
    }
};
class Manager : virtual public Employee
{
    public:
    float bonus;

public:
    Manager()
    {
        this->id = 0;
        this->sal = 0;
        this->bonus = 0;
        this->designation = "Manager";
    }

    Manager(int id, float sal, float bonus, string designation)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
        this->designation = designation;
    }

    string get_designation_M()
    {
        return this->designation;
    }
    void accept()
    {
        cout << "Enter Manager's id: ";
        cin >> this->id;
        cout << "Enter Manager's salary: ";
        cin >> this->sal;
        cout << "Enter Manager's bonus: ";
        cin >> this->bonus;
        cout << "Enter Designation: ";
        cin >> this->designation;
    }
    void display()
    {

        cout << "Manager's id: " << this->id << endl;
        cout << "Manager's salary: " << this->sal << endl;
        cout << "Manager's bonus: " << this->bonus << endl;
        cout << "Designation: " << this->designation << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter Manager's bonus: ";
        cin >> this->bonus;
    }
    void display_manager()
    {
        cout << "Bonus is: " << this->bonus << endl;
    }
};
class Salesman : virtual public Employee
{
protected:
    float comm;

public:
    Salesman()
    {
        this->id = 0;
        this->sal = 0;
        this->comm = 0;
        this->designation = "Salesman";
    }
    Salesman(int id, float sal, float comm, string designation)
    {
        this->id = id;
        this->sal = sal;
        this->comm = comm;
        this->designation = designation;
    }
    int get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        cout << "Enter Salesman's id: ";
        cin >> this->id;
        cout << "Enter Salesman's salary: ";
        cin >> this->sal;
        cout << "Enter Salesman's comm: ";
        cin >> this->comm;
        cout << "Enter designation: ";
        cin >> this->designation;

    }
    void display()
    {
        cout << "Salesman's id: " << this->id << endl;
        cout << "Salesman's salary: " << this->sal << endl;
        cout << "Salesman's comm: " << this->comm << endl;
        cout << "Designation: "<<this->designation<<endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter Salesman's comm: ";
        cin >> this->comm;
    }
    void display_manager()
    {
        cout << "Comm is: " << this->comm << endl;
    }
};
class Sales_manager : public Salesman, public Manager
{

public:
    Sales_manager()
    {
        this->id = 0;
        this->sal = 0;
        this->bonus = 0;
        this->comm = 0;
        Employee::designation = "Sales Manager";
    }
    Sales_manager(int id, float sal, float bonus, float comm, string designation)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
        this->comm = comm;
        this->designation = designation;
    }
    void accept()
    {
        cout << "Enter Sales manager's id: ";
        cin >> this->id;
        cout << "Enter Sales manager's salary: ";
        cin >> this->sal;
        cout << "Enter Sales manager's bonus: ";
        cin >> this->bonus;
        cout << "Enter Sales manager's commission: ";
        cin >> this->comm;
        cout<<"Enter Designation: ";
        cin >> this->designation;
    }
    void display()
    {

        cout << "Sales manager's id: " << this->id << endl;
        cout << "Salas manager's salary: " << this->sal << endl;
        cout << "Sales manager's bonus: " << this->bonus << endl;
        cout << "Sales manager's commission: " << this->comm << endl;
        cout<< " Designation: "<<this->designation<<endl;
    }
};
int menu()
{
    int choice;
    cout << "********************" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Manager" << endl;
    cout << "2. Accept Salesman" << endl;
    cout << "3. Accept Sales Manager" << endl;
    cout << "4. Display all count of employees wrt to designation" << endl;
    cout << "5. Display respective designation of employees" << endl;
    cout << "6. Display all employees" << endl;
    cout << "**********************" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    return choice;
}
void countAllEmployees(Employee *ptr[], int index)
{
    int count_manager = 0;
    int count_salesman = 0;
    int count_salesmanager = 0;
    for (int i = 0; i < index; i++)
    {
        if (ptr[i]->get_designation_M() == "Manager")
        {
            count_manager++;
        }
        else if (ptr[i]->get_designation_S() == "Salesman")
        {
            count_salesman++;
        }
        else if (ptr[i]->get_designation_SM() == "Sales Manager")
        {
            count_salesmanager++;
        }
    }
    cout<<"Counts info: "<<endl;
    cout << "Number of manager's count: " << count_manager << endl;
    cout << "Number of salesman's count: " << count_salesman << endl;
    cout << "Number of Salesmanager's count: " << count_salesmanager << endl;
}
void printEmployeesbyDesignation(Employee *ptrd[], int index)
{
    cout<<"Display the designation of employees:"<<endl;
    for (int i = 0; i < index; i++)
    {
        if (ptrd[i]->get_designation_M() == "Manager")
        {
            cout << "Manager" << endl;
        }
        if (ptrd[i]->get_designation_M() == "Salesman")
        {
            cout << "Salesman" << endl;
        }
        if (ptrd[i]->get_designation_M() == "Sales Manager")
        {
            cout << "Sales manager" << endl;
        }
    }
}
int main()
{
    int index = 0;
    Employee *emp[10];
    int ch;
    while ((ch = menu()) != 0)
    {
        switch (ch)
        {
        case 1:
            if (index < 10)
            {
                emp[index] = new Manager();
                emp[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full, can't upload more" << endl;
            }
            break;
        case 2:
            if (index < 10)
            {
                emp[index] = new Salesman();
                emp[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full, can't upload more" << endl;
            }
            break;
        case 3:
            if (index < 10)
            {
                emp[index] = new Sales_manager();
                emp[index]->accept();
                index++;
            }
            else
            {
                cout << "Array is full, can't upload more" << endl;
            }
            break;
        case 4:
            countAllEmployees(emp, index);
            break;
        case 5:
            printEmployeesbyDesignation(emp, index);
            break;
        case 6:
            for (int i = 0; i < index; i++)
            {
                emp[i]->display();
            }
            break;
        default:
            cout << "Please enter valid option" << endl;
            break;
        }
    }
    //deallocating the dynamic memory
    for(int i=0; i<index;i++)
    {
        delete emp[i];
    }
 

    return 0;
}