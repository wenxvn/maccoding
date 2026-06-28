#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<pair<double,double>>a;
    for(int i=0;i<n;i++){
        double x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    while(m--){
        double x,y,r;cin>>x>>y>>r;
        int cnt=0;
        for(int i=0;i<n;i++){
            double dis=(a[i].first-x)*(a[i].first-x)+(a[i].second-y)*(a[i].second-y);
            if(dis<=r*r)cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}