//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;
vector<double> v;
vector<pair<int,int>> sets;

int main(){
    int n;
    cin>> n;

    for(int i=0; i<n ;i++){
        int x,y;
        cin>> x >> y;
        sets.push_back({x,y});
    }

    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(i != j){
                double dis = 
                    sqrt(
                        pow(sets[i].first - sets[j].first , 2) + 
                        pow(sets[i].second - sets[j].second , 2));
                
                v.push_back(dis);
                //cout<< dis <<endl;
            }
        }
    }

    sort(v.begin(), v.end());
    cout<< setprecision(15) << v.front() <<endl;
    
    return 0;
}