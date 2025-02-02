// author:   Swarup Sikder
// judge:    ...
// problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;

    //fibonacci vector
    vector<int> v;

    // fibonacci
    int a1, a2, a3;
    a1 = 0;
    a2 = 1;
    a3 = a1 + a2;

    v.push_back(a1);
    //v.push_back(a2);

    while (a3 <= 10000000)
    {
        v.push_back(a3);
        //cout << a3 << " ";
        a1 = a2;
        a2 = a3;
        a3 = a1 + a2;
    }

    for(auto num: v){
        if(l <= num && num <= r) cout<< num <<endl; 
    }

    return 0;
}