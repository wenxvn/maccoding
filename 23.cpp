#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<vector<int>>gra(n+1);
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        gra[a].push_back(b);gra[b].push_back(a);
    }
    vector<bool> vis(n+1);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        queue<int>q;
        q.push(i);
        vis[i]=true;
        int edge=0;
        int point=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            point++;
            edge+=gra[t].size();
            for(int v:gra[t]){
                if(!vis[v]){
                    q.push(v);
                    vis[v]=true;
                }
            }
        }
        edge/=2;
        if(edge%2==point%2)ans+=point;
        else ans+=point-1;
    }
    cout<<ans;
    return 0;
}