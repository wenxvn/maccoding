#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    vector<vector<pair<int>>>gra(n+1);
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        gra[a].push_back({b,c});
        gra[b].push_back({a,c});
    }
    while(k--){
        int a,b;cin>>a>>b;
        if(gra)
    }
    return 0;
}