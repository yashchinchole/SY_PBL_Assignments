#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, ans;
    cout << "Enter 1 Binary Number : ";
    cin >> a;
    cout << "Enter 2 Binary Number : ";
    cin >> b;

    if (a.length() > b.length())
        swap(a, b);

    stack<int> s1, s2;

    for (char c : a)
        s1.push(c - '0');
    for (char c : b)
        s2.push(c - '0');

    int carry = 0;
    while (!s1.empty() || !s2.empty())
    {
        int sum = carry;

        if (!s1.empty())
        {
            sum += s1.top();
            s1.pop();
        }

        if (!s2.empty())
        {
            sum += s2.top();
            s2.pop();
        }

        ans += (char)(sum % 2 + '0');
        carry = sum / 2;
    }

    if (carry)
        ans += '1';

    reverse(ans.begin(), ans.end());
    cout << "Addition of Binary Numbers : " << ans << endl;

    return 0;
}