//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Input
    string line;
    getline(cin, line);
    
    string lineModified = "";
    stringstream ss(line);
    string word;
    while(ss >> word){
        int cnt = 0;
        for(char ch: word){
            if('A'<=ch && ch<='Z'){
                cnt++;
            }
        }

        if(cnt == word.size()){
            continue;
        }

        lineModified = lineModified + word + " ";
    }

    // Output
    cout << lineModified << endl;
    
    return 0;
}