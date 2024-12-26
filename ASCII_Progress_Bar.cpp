//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>> n;

    cout<<"[";

    for(int i=1; i<=10 ;i++){
        if(i<=n/10) cout<<"+";
        else cout<<".";
    }
    
    cout<< "]" <<" "<< (int) n << "%" <<endl;;
    
    return 0;
}