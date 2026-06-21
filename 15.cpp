#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    unordered_map<pair<int,int>,int>mp;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        mp[a,b]=c;
        mp[b,a]=c;
    }
    while(k--){
        int a,b;cin>>a>>b;
        if(mp[a,b]==1||mp[b,a]==1)cout<<"No problem"<<'\n';
        else if(mp[a,b]==-1||mp[b,a]==-1)cout<<"No way"<<'\n';
        else {
            bool enemy=false;
            bool frien=false;
            for(int i=1;i<=n;i++){
                if((mp[a,i]==1||mp[i,a]==1)&&(mp[b,i]==1||mp[i,b]==1))frien=true;
                if((mp[a,i]==-1||mp[i,a]==-1)&&(mp[b,i]==-1||mp[i,b]==-1))enemy=true;
            }
            if(enemy&&frien)cout<<"OK but..."<<'\n';
            else cout<<"OK"<<'\n';
        }
    }
    return 0;
}