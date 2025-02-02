//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);

    int upper=0, lower=0;
    for(int i=0; i<sentence.size() ;i++){
        if('a' <= sentence[i] && sentence[i] <= 'z') lower++;
        else if('A' <= sentence[i] && sentence[i] <= 'Z') upper++;
    }

    cout<< upper <<" "<< lower <<endl;
    
    return 0;
}