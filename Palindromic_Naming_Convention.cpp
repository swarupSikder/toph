//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (string s) {
    bool flag = true;
    for(int i=0, j=s.size()-1; i<j ;i++, j--){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
    }
    return flag;
}

void body(){
    string first;
    cin>> first;

    string last;
    last = first;
    reverse(last.begin(), last.end());
    last.erase(last.begin());

    //shortest palindrome
    string tmp = last;
    while(tmp.size() > 1){
        tmp.erase(tmp.end());

        if(isPalindrome(first + tmp)){
            last = tmp;
        }
        else{
            break;
        }
    }
    

    cout<< first <<" "<< last <<endl;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        body();
    }
    return 0;
}