// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int total = n + m;
    list<int> myList;
    while (total--)
    {
        int val;
        cin >> val;
        myList.push_back(val);
    }

    // sort and unique
    myList.sort();
    myList.unique();

    // print
    total = myList.size();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it;
        total--;
        (total == 0) ? std::cout << endl : std::cout << " ";
    }

    return 0;
}