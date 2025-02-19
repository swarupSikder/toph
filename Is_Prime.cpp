//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

bool isPrime (int n) {
    bool flag = true;
    for(int i=2; i<sqrt(n) ;i++){
        if(n%i == 0){
            flag = false;
        }
    }
    return flag;
}

int main(){
    int n;
    cin>> n;

    (isPrime(n))? std::cout<< "Yes" <<endl: std::cout<< "No" <<endl;
    
    return 0;
}