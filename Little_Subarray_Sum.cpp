//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> pre;

int main(){
    int n, a, b;
    cin>> n >> a >> b;
    int sum = 0;

    while(n--){
        int val;
        cin>> val;
        sum += val;
        v.push_back(val);
        pre.push_back(sum);
    }

    cout<< pre[b] - pre[a-1] <<endl;

    return 0;
}