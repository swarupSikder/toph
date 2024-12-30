//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin>> x >> y;

    int rem = y%x;

    cout<< x-rem <<endl;
    
    return 0;
}