//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

bool isLeapYear (int n) {
    bool flag;

    if(n%4 == 0 && n%400 != 0){
        flag = true;
    }
    else{
        flag = false;
    }

    return flag;
}

int main(){
    int n;
    cin>> n;

    (isLeapYear(n))? std::cout<< "Yes" <<endl : std::cout<< "No" <<endl;
    
    return 0;
}