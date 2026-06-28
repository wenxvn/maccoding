#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    int mindis=LLONG_MAX;
    for(int i=0;i<n;i++){
        int sum=-1;
        int len;
        for(int j=0;j<n;j++){
            len=abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second);
            sum=max(sum,len);
        }
        mindis=min(mindis,sum);
    }
    cout<<mindis;
    return 0;
}