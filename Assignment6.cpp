#include <bits/stdc++.h>
using namespace std;

class Mat
{
private:
    int mat[10][10];
    int row, col;

public:
    void Read();
    void Add(Mat);
    void Mul(Mat);
};

void Mat::Read()
{
    cout << "Enter Rows : ";
    cin >> row;
    cout << "Enter Columns : ";
    cin >> col;

    try
    {
        if (row > 10 || col > 10)
            throw 2;
    }
    catch (int n)
    {
        if (n == 2)
        {
            cout << "Number of Rows & Columns Are Beyond Array Size" << endl;
            return;
        }
    }

    cout << "Enter Matrix" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];
}

void Mat::Add(Mat m)
{
    try
    {
        if (this->row != m.row || this->col != m.col)
            throw 2;
    }
    catch (int n)
    {
        if (n == 2)
        {
            cout << "Number of Rows & Columns Are Not Same" << endl;
            return;
        }
    }

    int arr[this->row][this->col];

    cout << "Addition" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = this->mat[i][j] + m.mat[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void Mat::Mul(Mat m)
{
    try
    {
        if (this->row != m.row || this->col != m.col)
            throw 2;
    }
    catch (int n)
    {
        if (n == 2)
        {
            cout << "Number of Rows & Columns Are Not Same" << endl;
            return;
        }
    }

    int arr[this->row][this->col];

    cout << "Multiplicaion" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 0;
            for (int k = 0; k < row; k++)
                arr[i][j] += this->mat[i][k] * m.mat[k][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    Mat m1, m2;
    m1.Read();
    m2.Read();
    m1.Add(m2);
    m1.Mul(m2);

    return 0;
}