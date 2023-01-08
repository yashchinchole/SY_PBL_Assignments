#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next, *prev;
};

class Ticket
{
private:
    Node *head[15], *tail[15];

public:
    Ticket();
    void Book();
    void Cancel();
    void Display();
};

Ticket::Ticket()
{
    for (int i = 1; i <= 15; i++)
    {
        head[i] = tail[i] = NULL;

        for (int j = 1; j <= 10; j++)
        {
            Node *temp;
            if (head[i] == NULL)
            {
                Node *nn = new Node;
                nn->data = '-';
                nn->next = NULL;
                nn->prev = NULL;
                head[i] = nn;
                temp = nn;
            }
            else
            {
                Node *nn = new Node;
                nn->data = '-';
                nn->next = NULL;
                nn->prev = temp;
                temp->next = nn;
                temp = nn;
            }
        }
    }
}

void Ticket::Book()
{
    int r, c, count = 0;
    cout << "Enter Row & Column Number to Booked" << endl;
    cin >> r >> c;

    Node *temp = head[r];
    while (count != c - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->data == '-')
    {
        temp->data = 'B';
        cout << "Booked Successfully" << endl;
    }
    else
        cout << "Already Booked" << endl;
}

void Ticket::Cancel()
{
    int r, c, count = 0;
    cout << "Enter Row & Column Number to Cancel Ticket" << endl;
    cin >> r >> c;

    Node *temp = head[r];
    while (count != c - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->data == 'B')
    {
        temp->data = '-';
        cout << "Cancel Successfully" << endl;
    }
    else
        cout << "Already Vacant" << endl;
}

void Ticket::Display()
{
    for (int i = 1; i <= 15; i++)
    {
        Node *temp;
        for (temp = head[i]; temp != NULL; temp = temp->next)
            cout << temp->data << "   ";
        cout << endl;
    }
}

int main()
{
    Ticket t;
    t.Display();
    t.Book();
    t.Display();
    t.Book();
    t.Display();
    t.Cancel();
    t.Display();

    return 0;
}