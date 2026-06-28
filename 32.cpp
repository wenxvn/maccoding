#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    while(q--){
        int l,r,v;cin>>l>>r>>v;
        l--;r--;
        for(int i=l;i<=r;i++)a[i]=v;
    }
    for(int i=0;i<n;i++){
        if(i)cout<<" ";
        cout<<a[i];
    }
    return 0;
}