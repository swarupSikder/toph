//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> q;

    int n;
    cin>> n;

    while(n--){
        int val;
        cin>> val;
        q.push(val);
    }

    cout<< q.top() <<endl;
    
    return 0;
}