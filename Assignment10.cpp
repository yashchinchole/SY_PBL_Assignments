#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> U = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Universal Set
    set<int> A = {1, 2, 3, 4, 5};             // Set of customers who like pizza
    set<int> B = {1, 3, 5, 7, 9};             // Set of customers who like burger

    // Set of customers who like either pizza or burger or both
    set<int> Union;
    Union.insert(A.begin(), A.end());
    Union.insert(B.begin(), B.end());
    cout << "Either Pizza or Burger or Both: ";
    for (int i : Union)
        cout << i << " ";
    cout << endl;

    // Set of customers who like both pizza and burger
    set<int> Inter;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(Inter, Inter.begin()));
    cout << "Both Pizza and Burger: ";
    for (int i : Inter)
        cout << i << " ";
    cout << endl;

    // Set of customers who like only pizza, not burger
    set<int> OnlyA;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(OnlyA, OnlyA.begin()));
    cout << "Only Pizza, Not Burger: ";
    for (int i : OnlyA)
        cout << i << " ";
    cout << endl;

    // Set of customers who like only burger, not pizza
    set<int> OnlyB;
    set_difference(B.begin(), B.end(), A.begin(), A.end(), inserter(OnlyB, OnlyB.begin()));
    cout << "Only Burger, Not Pizza: ";
    for (int i : OnlyB)
        cout << i << " ";
    cout << endl;

    set<int> Neither;
    set_difference(U.begin(), U.end(), Union.begin(), Union.end(), inserter(Neither, Neither.begin()));
    cout << "Neither Pizza Nor Burger: ";
    for (int i : Neither)
        cout << i << " ";

    return 0;
}