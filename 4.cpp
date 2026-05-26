#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>u(m),v(m);
    vector<int>edge(n+1);
    for(int i=0;i<m;i++){
        cin>>u[i]>>v[i];
        edge[u[i]]++;edge[v[i]]++;
    }
    long long ans=0;
    for(int i=0;i<m;i++){
        ans+=(edge[u[i]]-1)*(edge[v[i]]-1)*2;
    }
    cout<<ans;
    return 0;
}