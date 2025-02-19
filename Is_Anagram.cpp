//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    (s1==s2)? std::cout<< "Yes" <<endl : std::cout<< "No" <<endl;
    
    return 0;
}