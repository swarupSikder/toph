//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj_list;

int main(){
    for(int i=0; i<100 ;i++){
        vector<int> v;
        v.push_back(0);
        adj_list.push_back(v);
    }

    cout<< adj_list[0].front();
    
    
    return 0;
}