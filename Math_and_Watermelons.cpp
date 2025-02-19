//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,k;
    cin>> m >> k;

    int perPersonGet = m/k;
    int remain = m - perPersonGet*k;
    cout<< remain <<endl;
    
    return 0;
}