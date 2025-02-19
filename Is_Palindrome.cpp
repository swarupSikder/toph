//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    bool flag = true;
    for(int i=0, j=s.size()-1; i<j ;i++,j--){
        if(s[i] != s[j]){
            flag = false;
        }
    }
    return flag;
}

int main(){
    string s;
    cin>> s;

    (isPalindrome(s))? std::cout<< "Yes" <<endl : std::cout<< "No" <<endl;
    
    return 0;
}