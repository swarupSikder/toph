//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> primeFactors;

int count (int n ,int x) {
    int cnt = 0;
    while(1){
        if(n%x != 0){
            break;
        }

        cnt++;
        n /= x;
    }
    return cnt;
}

bool isPrime (int n) {
    bool flag = true;
    for(int i=2; i<n ;i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }

    return flag;
}

void storePrimes(int n){
    for(int i=2; i<=n ;i++){
        if(n%i == 0){
            if(isPrime(i)){
                primeFactors.push_back(i);
            }
        }
    }
}

int main(){
    int n;
    cin>> n;
    storePrimes(n);

    // for(int num: primeFactors){
    //     cout<< num <<" ";
    // }
    // cout<<endl;

    cout<< n << " = ";
    for(int i=0; i<primeFactors.size() ;i++){
        cout<< primeFactors[i] <<" ^ "<< count(n, primeFactors[i]);
        (i == primeFactors.size()-1)? std::cout<<endl : std::cout<< " * ";
    }
    
    return 0;
}