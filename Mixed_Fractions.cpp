//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>> x >> y;
    float mainPart = (float) x / y;
    

    int frac1=0, frac2=0;
    if(mainPart > (int) mainPart){
        frac1 = x - y*(int) mainPart;
        frac2 = y;
    }

    cout<< (int) mainPart <<" "<< frac1 <<" "<<frac2 <<endl;

    
    return 0;
}