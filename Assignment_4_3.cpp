// Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write parameter-less constructor. Write accept() and print() functions.
// Also provide add(), subtract(), multiply() and transpose() function.
#include <iostream>
using namespace std;
class Matrix
{
    // data members
    int row;
    int col;
    int **arr;
    // parameterless ctor
public:
    Matrix()
    {
        this->row = 0;
        this->col = 0;
    }

    // parameterized ctor
    Matrix(int row, int col) : row(row), col(col)
    {
        arr = new int *[row];
        for (int i = 0; i < row; i++)
            arr[i] = new int[col];
    }
    void accept()
    {
        cout << "Enter the elements for each row" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }
    }
    void print()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void add(Matrix m1, Matrix m2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            }
        }
    }
    void subtract(Matrix m1, Matrix m2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = m1.arr[i][j] - m2.arr[i][j];
            }
        } 
    }
     void multiply(Matrix m1, Matrix m2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = m1.arr[i][j] * m2.arr[i][j];
            }
        } 
    }
    Matrix transpose()
    {
        Matrix result(row,col);
         for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                
                result.arr[i][j] = arr[j][i];
            }
        } 
        return result;
    }
    
};
int main()
{
    int row, col;
    cout << "Enter the number of rows: " << endl;
    cin >>row;
    cout << "Enter the number of columns: " << endl;
    cin >>col;
    Matrix m1(row, col);
    Matrix m2(row, col);
    m1.accept();
    // m1.print();
    m2.accept();
    // m2.print();
    Matrix result(row, col);
    result.add(m1, m2);
    cout<<"The  addition of two matrices: "<<endl;
    result.print();
    result.subtract(m1,m2);
    cout<<"The  subtraction of two matrices: "<<endl;
    result.print();
    result.multiply(m1,m2);
    cout<<"The  multiplication of two matrices: "<<endl;
    result.print();
    Matrix transpose=result.transpose();
    cout<<"The transpose of the matrix result is: "<<endl;
    transpose.print();

    return 0;
}