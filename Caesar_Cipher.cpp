//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    cin.ignore();
    string s;
    getline(cin, s);

    string alp = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    for(int i=0; i<s.size() ;i++){
        for(int j=26; j<52 ;j++){
            if(s[i]==alp[j]){
                s[i] = alp[j-n];
                break;
            }
        }
    }

    cout<< s <<endl;
    
    return 0;
}