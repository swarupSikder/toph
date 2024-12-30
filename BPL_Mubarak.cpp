//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

void body(){
    string s;
    cin>> s;

    int over = 0;
    int ball = 0;

    for(char c: s){
        if(c != 'W' && c != 'N' && c != 'D'){
            ball++;
        }

        if(ball == 6){
            over++;
            ball = 0;
        }

    }

    if(over != 0){
        cout<< over;
        (over>1)? std::cout<<" OVERS " : std::cout<<" OVER ";
    }
    
    if(ball != 0){
        cout<< ball;
        (ball>1)? std::cout<<" BALLS " : std::cout<<" BALL " <<endl;
    }
    else{
        cout<<endl;
    }
}

int main(){
    int t;
    cin>> t;

    while(t--){
        body();
    }
    
    return 0;
}