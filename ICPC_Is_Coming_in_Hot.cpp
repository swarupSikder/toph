//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    vector<int> f(10,0);

    for(int i=0; i<s.size() ;i++){
        f[s[i]-'0']++;
    }

    //Find the digit with maximum frequency
    int mx = INT_MIN, idx = 0;
    for(int i=0; i<10 ;i++){
        if(f[i] > mx){
            mx = f[i];
            idx = i;
        }
    }

    cout << idx << endl;
    
    
    return 0;
}