#include <bits/stdc++.h>
using namespace std;

class Mat
{
private:
    int m[10][10];
    int row, col;

public:
    void Read();
    void Add(Mat);
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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> m[i][j];
    }
}

void Mat::Add(Mat m2)
{
    try
    {
        if (this->row != m2.row || this->col != m2.col)
            throw 2;
    }

    catch (int n)
    {
        if (n == 2)
        {
            cout << "Number of Rows & Columns Do Not Match" << endl;
            return;
        }
    }

    int arr[this->row][this->col];

    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            arr[i][j] = this->m[i][j] + m2.m[i][j];
            cout << arr[i][j];
        }
    }
}

int main()
{
    Mat m1, m2;

    m1.Read();
    m2.Read();
    m1.Add(m2);

    return 0;
}