#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //存储路径
    cin>>n>>m;
    vector<vector<int>>gra(n+1);
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        gra[u].push_back(v);
        gra[v].push_back(u);
    }
    //判断起点和终点能否联通
    int start,end;
    cin>>start>>end;
    vector<bool> vis(n+1);
    vis[start]=true;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=0;i<gra[t].size();i++){
            int k=gra[t][i];
            if(!vis[k]){
                vis[k]=true;
                q.push(k);
            }
        }
    }
    if(!vis[end]){
        cout<<-1;
        return 0;
    }
    //寻找关键点
    vector<int>path;
    for(int i=1;i<=n;i++){
        if(vis[i]&&i!=start&&i!=end){
            path.push_back(i);
        }
    }
    for(int i=0;i<path.size();i++){
        vector<bool> g(n+1);
        g[start]=true;
        queue<int>w;
        w.push(start);
        while(!w.empty()){
            int t=w.front();
            w.pop();
            for(int j=0;j<gra[t].size();j++){
                int k=gra[t][j];
                if(!g[k]&&path[i]!=k){
                    g[k]=true;
                    w.push(k);
                }
            }
        }
        if(!g[end])ans++;
    }
    cout<<ans;
    return 0;
}