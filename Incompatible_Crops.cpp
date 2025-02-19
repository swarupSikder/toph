//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
char grid[25][25];
vector<pair<int,int>> d = {{1,0},{0,1},{-1,0},{0,-1}};
int n,m;

// bool valid(int i, int j){
//     return !(i<0 || i>=n || j<0 || j>=m);
// }

int main(){
    //input
    cin>> n >> m;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            cin>> grid[i][j];
        }
    }

    //modify grid
    int cnt = 0;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
            if(
                grid[i+d[0].first][j+d[0].second] != '*' &&
                grid[i+d[1].first][j+d[1].second] != '*' &&
                grid[i+d[2].first][j+d[2].second] != '*' &&
                grid[i+d[3].first][j+d[3].second] != '*' &&
                grid[i][j] != '*'
            ){
                //grid[i][j] = 'X';
                cnt++;
            }
        }
    }

    //print
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<m ;j++){
    //         cout<< grid[i][j];
    //     }
    //     cout<<endl;
    // }
    cout<< cnt <<endl;
    
    return 0;
}