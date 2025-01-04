//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    vector<string> sound;
    string line;
    int max_line_len = 0;

    for(int i=0; i<n ;i++){
        cin>> line;
        sound.push_back(line);
    }

    //make all the a's even
    for(int i=0; i<n ;i++){
        int cnt = count(sound[i].begin(), sound[i].end(), 'a');


        if(cnt == 1){
            sound[i].push_back('a');
        }
        else if(cnt > 1 && cnt%2 != 0){
            sound[i].pop_back();
        }

        //count max line length
        if(sound[i].size() > max_line_len){
            max_line_len = sound[i].size();
        }

    }


    //cout<< max_line_len <<endl;
    //add spaces before shorter string
    for(int i=0; i<n ;i++){
        if(sound[i].size()<max_line_len){
            int space = (max_line_len - sound[i].size())/2;
            for(int j=0; j<space ;j++){
                sound[i].insert(sound[i].begin(), ' ');
            }
        }
    }

    for(int i=0; i<n ;i++){
        cout<< sound[i] <<endl;
    }
    
    return 0;
}