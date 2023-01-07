#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> frequency;
    int arr[] = {1, 2, 3, 1, 2, 3, 1, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        frequency[arr[i]]++;

    for (auto &it : frequency)
    {
        if (it.second > 1)
            cout << it.first << " Appears " << it.second << " Times" << endl;
    }

    return 0;
}