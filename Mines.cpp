//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
char grid[10][10];
vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
int n,m;

bool valid (int i, int j) {
    return !(i<0 || i>=n || j<0 || j>=m);
}

int main(){
    //input
    cin>> n >> m;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cin>> grid[i][j];
        }
    }

    //modify grid
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            if(grid[i][j] == '*'){
                continue;
            }

            int cnt = 0;
            for(auto d: dir){
                int ni = i + d.first;
                int nj = j + d.second;
                
                //Check boundary conditions
                if(valid(ni, nj) && grid[ni][nj] == '*'){
                    cnt++;
                }
            }

            if(cnt != 0){
                grid[i][j] = cnt + '0';
            }
        }
    }

    //print
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cout<< grid[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}