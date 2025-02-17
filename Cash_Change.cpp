//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int cash;
vector<int> v;

void addNotes(int note){
    int count = 0;
    if(cash >= note){
        count = cash/note;
        cash = cash - count*note;
    }
    for(int i=0; i<count ;i++){
        v.push_back(note);
    }
}

int main(){
    //input
    cin>> cash;

    addNotes(500);
    addNotes(100);
    addNotes(50);
    addNotes(10);
    addNotes(5);
    addNotes(1);
    
    //sort ASC
    sort(v.begin(), v.end());

    //print
    for(int n: v){
        cout<< n << " ";
    }
    cout<<endl;
    
    return 0;
}