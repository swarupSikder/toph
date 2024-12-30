//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>> x;

    //frequency array
    vector<int> f(10);

    vector<int> digits;
    while(1){
        if(x == 0) break;

        f[x%10]++;
        digits.push_back(x%10);
        x /= 10;
    }

    // for(int i=0; i<10 ;i++){
    //     cout<< f[i] <<" ";
    // }
    // cout<<endl;

    int mx = INT_MIN;
    int idx = 0;

    for(int i=0; i<10 ;i++){
        if(f[i] > mx){
            mx = f[i];
            idx = i;
        }
    }

    cout<< idx <<endl;
    
    return 0;
}