#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    map<pair<int,int>,int>mp;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        mp[{a,b}]=c;
        mp[{b,a}]=c;
    }
    while(k--){
        int a,b;cin>>a>>b;
        if(mp[{a,b}]==1)cout<<"No problem"<<'\n';
        else {
            //enemy表示a、b是否直接为敌人
            bool enemy=false;
            bool frien=false;
            if(mp[{a,b}]==-1)enemy=true;
            for(int i=1;i<=n;i++)if(mp[{a,i}]==1&&mp[{b,i}]==1)frien=true;
            if(enemy&&frien)cout<<"OK but..."<<'\n';
            else if(enemy)cout<<"No way"<<'\n';
            else cout<<"OK"<<'\n';
        }
    }
    return 0;
}