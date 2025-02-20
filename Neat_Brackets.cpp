//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    stack<char> stk;
    for(char c: s){
        if(c=='('){
            stk.push(c); 
        }

        if(c==')'){
            if(stk.empty()){
                cout<< "No" <<endl;
                return 0;
            }

            if(stk.top()=='('){
                stk.pop();
            }
        }
    }

    (stk.empty())? std::cout<< "Yes" <<endl : std::cout<< "No" <<endl;
    
    return 0;
}