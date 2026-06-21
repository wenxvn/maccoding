#include<bits/stdc++.h>
using namespace std;
int father[105];
int find(int x){
    if(father[x]!=x){
        father[x]=find(father[x]);
    }
    return father[x];
}
void Friend(int x,int y){
    int rootx=find(x);
    int rooty=find(y);
    if(rootx!=rooty)father[rootx]=rooty;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    for(int i=1;i<=n;i++)father[i]=i;
    map<pair<int,int>,int>mp;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        mp[{a,b}]=c;
        mp[{b,a}]=c;
        if(c==1)Friend(a,b);
    }
    while(k--){
        int a,b;cin>>a>>b;
        bool isFriend=false;
        bool isEnemy=false;
        if(find(a)==find(b))isFriend=true;
        if(mp[{a,b}]==-1)isEnemy=true;
        if(isFriend&&!isEnemy)cout<<"No problem"<<'\n';
        else if(!isFriend&&!isEnemy)cout<<"OK"<<'\n';
        else if(isFriend&&isEnemy)cout<<"OK but..."<<'\n';
        else cout<<"No way"<<'\n';
    }
    return 0;
}