#include <iostream>
using namespace std;
class Node
{
public:
    string data = "Vacant";
    Node *next;
    Node *prev;
};
class Cinemax
{
public:
    Node *b[15][10];
    Cinemax()
    {
        for (int i = 0; i < 15; i++)
        {
            b[i][0] = new Node();
            b[i][0]->data = "Vacant";
            b[i][0]->next = b[i][1];
            b[i][0]->prev = NULL;
        }
        for (int i = 1; i < 15; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                b[i][j] = new Node();
                if (j < 10)
                {
                    b[i][j]->next = b[i][j + 1];
                }
                else
                {
                    b[i][j]->next = NULL;
                }
                b[i][j]->prev = b[i][j - 1];
            }
        }
    }
    void bookTicket()
    {
        int rno, seatno;
        cout << "\nEnter row no : ";
        cin >> rno;
        cout << "\nEnter seat no : ";
        cin >> seatno;
        if (b[rno][seatno]->data == "Booked")
        {
            cout << "\nSeat is not vacant";
        }
        else
        {
            b[rno][seatno]->data = "Booked";
            cout << "\nSeat booked";
        }
    }
    void cancelTicket()
    {
        int rno, seatno;
        cout << "\nEnter row no : ";
        cin >> rno;
        cout << "\nEnter seat no : ";
        cin >> seatno;
        if (b[rno][seatno]->data == "Booked")
        {
            b[rno][seatno]->data = "Vacant";
            cout << "\nTicket booked";
        }
        else
        {

            cout << "\nSeat was not booked";
        }
    }
    void availableSeats()
    {
        int seat = 0;
        Node *temp;
        for (int i = 0; i < 15; i++)
        {
            temp = b[i][0];
            while (temp != NULL)
            {

                cout << "\nRow no : " << i << " seat no " << seat;

                temp = temp->next;
                seat++;
            }
        }
    }
};
int main()
{
    Cinemax c;

    int choice;
    do
    {
        cout << "\n1.Book ticket ";
        cout << "\n2.Cancel ticket";
        cout << "\n3.See available seats";

        cout << "\n4.Exit";
        cout << "\nChoice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            c.bookTicket();
            break;
        case 2:
            c.cancelTicket();
            break;
        case 3:
            c.availableSeats();
            break;
        case 4:
            choice = 0;
            break;

        default:
            break;
        }
    } while (choice);

    return 0;
}