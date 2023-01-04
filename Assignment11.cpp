#include <iostream>
using namespace std;

struct node
{
    char status;
    node *next;
    node *prev;
};
class cinemax
{
public:
    node *head[15];
    node *tail[15];
    cinemax()
    {
        for (int i = 1; i <= 15; i++)
        {
            head[i] = NULL;
            tail[i] = NULL;
            for (int j = 1; j <= 10; j++)
            {
                node *temp;
                if (head[i] == NULL)
                {
                    node *nn;
                    nn = new node();
                    nn->status = 'A';
                    nn->prev = NULL;
                    nn->next = NULL;
                    head[i] = nn;
                    temp = nn;
                }
                else
                {
                    node *nn;
                    nn = new node();
                    nn->status = 'A';
                    nn->prev = temp;
                    temp->next = nn;
                    temp = nn;
                }
            }
        }
    }
    void book_seat();
    void display()
    {
        for (int i = 1; i <= 15; i++)
        {
            node *t1;
            for (t1 = head[i]; t1 != NULL; t1 = t1->next)
            {
                cout << t1->status << " ";
            }
            cout << endl;
        }
    }
};

void cinemax::book_seat()
{
    int r, c;
    cout << "ENTER THE ROW AND COLUMN TO BE BOOKED" << endl;
    cin >> r >> c;
}

int main()
{
    cinemax c1;
    c1.display();
}