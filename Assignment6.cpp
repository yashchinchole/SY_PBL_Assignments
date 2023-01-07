#include <iostream>
using namespace std;

class matrix
{
    int row, coloumn, M[5][5];

public:
    void read()
    {
        cout << "\nEnter the number of rows : ";
        cin >> row;
        cout << "\nEnter the number of coloumns : ";
        cin >> coloumn;

        try
        {
            if (row > 5 || coloumn > 5)
            {
                throw 1;
            }
        }
        catch (int a)
        {
            cout << "\nexception caught!\n";
            cout << "\nNumber of rows and coloumns should be less than equal to 5 !\n";
            return;
        }

        for (int i = 0; i < row; i++)
        {
            cout << "\nEnter elements of " << i + 1 << " row :" << endl;

            for (int j = 0; j < coloumn; j++)
            {
                cout << "\nEnter element at (" << i + 1 << "," << j + 1 << ") position :";
                cin >> M[i][j];
            }
        }
    }

    void display()
    {
        cout << "\nDisplaying array.......\n\n"
             << endl;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < coloumn; j++)
            {
                cout << M[i][j] << " ";
            }
            cout << "\n\n";
        }
    }

    matrix operator+(matrix x)
    {
        matrix X;
        X.row = row;
        X.coloumn = coloumn;

        try
        {
            if (row != x.row || coloumn != x.coloumn)
            {
                throw 1;
            }
        }
        catch (int e)
        {
            cout << "\nException Caugth in 4K!";
            cout << "\nNumber of row and coloumns shoulld be eqaul for addition!";
            exit(0);
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                X.M[i][j] = M[i][j] + x.M[i][j];
            }
        }
        cout << "\nAddition of matrix : \n";

        return X;
    }

    matrix operator-(matrix x)
    {
        matrix X;
        X.row = row;
        X.coloumn = coloumn;

        try
        {
            if (row != x.row || coloumn != x.coloumn)
            {
                throw 1;
            }
        }
        catch (int e)
        {
            cout << "\nException Caugth in 4K!";
            cout << "\nNumber of row and coloumns shoulld be eqaul for addition!";
            exit(0);
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                X.M[i][j] = M[i][j] - x.M[i][j];
            }
        }

        cout << "\nSubtraction of matrix : \n";

        return X;
    }

    matrix operator*(matrix x)
    {
        matrix c;
        int i, j, k;

        try
        {
            if (coloumn != x.row)
            {
                throw 1;
            }
        }
        catch (int e)
        {
            cout << "\n\nMultiplication is not possible!";
            exit(0);
        }
        c.row = row;
        c.coloumn = x.coloumn;

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < x.coloumn; j++)
            {
                c.M[i][j] = 0;
                for (k = 0; k < row; k++)
                {
                    c.M[i][j] += M[i][k] * x.M[k][j];
                }
            }
        }
        return c;
    }
};

int main()
{
    int choice;
    matrix m1, m2, m3, m4, m5;

    cout << "\nEnter first matrix : " << endl;
    m1.read();
    m1.display();

    cout << "\nEnter second matrix : " << endl;
    m2.read();
    m2.display();

    while (choice != 4)
    {
        cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.exit";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            m3 = m1 + m2;
            m3.display();
            break;
        case 2:
            m4 = m1 - m2;
            m4.display();
            break;
        case 3:
            m5 = m1 * m2;
            m5.display();
            break;
        case 4:
            break;
        default:
            cout << "\nEnter a valid choice !" << endl;
        }
    }
    cout << "\nExited Successfully!";

    return 0;
}