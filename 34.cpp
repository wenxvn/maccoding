#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<pair<double,double>>a;
    vector<int>cnt(n);
    for(int i=0;i<n;i++){
        double x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    while(m--){
        double x,y,r;cin>>x>>y>>r;
        for(int i=0;i<n;i++){
            double dis=(a[i].first-x)*(a[i].first-x)+(a[i].second-y)*(a[i].second-y);
            if(dis<=r*r)cnt[i]++;
        }
    }
    for(int i=0;i<n;i++)cout<<cnt[i]<<'\n';
    return 0;
}