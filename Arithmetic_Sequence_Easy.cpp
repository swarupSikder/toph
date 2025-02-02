//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int total = n*(n+1)/2;

    int m;
    cin>> m;
    int sum = 0;
    while(m--){
        int val;
        cin>> val;
        sum += val;
    }

    cout<< total - sum <<endl;
    
    return 0;
}