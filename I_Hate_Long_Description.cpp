//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
bool hasReturnWay;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    //edge case
    if(adj_list[src].empty()){
        hasReturnWay = true;
        return;
    }

    //cout<< "src -> " << src <<endl;
    while(!q.empty()){
        //store and pop the front
        int par = q.front();
        q.pop();

        //
        //cout<< par << endl;

        //push the children
        for(int child: adj_list[par]){
            if(child==src){
                hasReturnWay = true;
                //cout<< "child -> " << child <<" : src -> " << src <<endl;
                break;
            }

            if(!vis[child]){
                vis[child] = true;
                q.push(child);
            }
        }

        if(hasReturnWay) break;
    }
}

int main(){
    int t;
    cin>> t;
    
    for(int k=1; k<=t ;k++){
        int n,e,cnt;
        cin>> n >> e;

        // Clear previous test case data
        for(int i = 1; i <= n; i++){
            adj_list[i].clear();
        }

        //memory set
        memset(vis, false, sizeof(vis));
        cnt = 0;

        while(e--){
            int x,y;
            cin>> x >> y;
            adj_list[x].push_back(y);
        }

        

        //call bfs
        for(int i=1; i<=n ;i++){
            hasReturnWay = false;
            memset(vis, false, sizeof(vis));
            bfs(i);
            if (!hasReturnWay) cnt++;
        }

        cout<< "Case " << k <<": "<< cnt <<endl;
    }

    return 0;
}