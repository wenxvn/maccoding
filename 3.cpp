#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
void dfs(vector<int>&path,vector<bool>&vis,vector<vector<int>>&gra,int cur){
    if(path.size()==4){
        ans++;
        return;
    }
    for(int i=0;i<gra[cur].size();i++){
        int t=gra[cur][i];
        if(!vis[t]){
            vis[t]=true;
            path.push_back(t);
            dfs(path,vis,gra,t);
            vis[t]=false;
            path.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    vector<vector<int>>gra(n+1);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        gra[u].push_back(v);
        gra[v].push_back(u);
    }
    vector<bool>vis(n+1);
    vector<int>path;
    for(int i=1;i<=n;i++){
        path.push_back(i);
        dfs(path,vis,gra,i);
        path.pop_back();
    }
    cout<<ans/2;
    return 0;
}