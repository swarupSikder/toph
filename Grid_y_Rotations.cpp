//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
int grid[15][15];
int m,n;
vector<pair<int,int>> pos = 
                            {
                                {-1,-1}, {-1, 0}, {-1, 1},
                                { 0, 1}, { 1, 1}, { 1, 0}, 
                                { 1,-1}, { 0,-1}
                            };

int main(){
    //input
    cin>> m >> n;
    for(int i=0; i<m ;i++){
        for(int j=0; j<n ;j++){
            cin>> grid[i][j];
        }
    }

    //query part
    int q;
    cin>> q;
    while(q--){
        int x,y,temp;
        cin>> x >> y;

        vector<int> v;

        for(auto p: pos){
            int r = x + p.first;
            int c = y + p.second;
            v.push_back(grid[r][c]);
        }

        temp = v.back();
        v.insert(v.begin(), temp);
        v.erase(v.end()-1);

        // for(int num: v){
        //     cout<< num <<" ";
        // }
        // cout<<endl;

        for(int i=0; i<v.size() ;i++){
            auto p = pos[i];
            int r = x + p.first;
            int c = y + p.second;
            grid[r][c] = v[i];
        }


        for(int i=0; i<m ;i++){
            for(int j=0; j<n ;j++){
                cout<< grid[i][j] <<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}