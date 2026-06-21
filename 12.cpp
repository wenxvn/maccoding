#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;cin>>n>>q;
    vector<int>a(n+1),pre(n+1),next(n+1,n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        int p=i-1;
        while(p){
            if(a[p]<a[i]){
                pre[i]=p;
                break;
            }
            p--;
        }
    }
    for(int i=1;i<=n;i++){
        int p=i+1;
        while(p<=n){
            if(a[p]>a[i]){
                next[i]=p;
                break;
            }
            p++;
        }
    }
    while(q--){
        int l,r;cin>>l>>r;
        bool flag=false;
        for(int i=l+1;i<=r-1;i++){
            if(pre[i]>=l&&next[i]<=r){
                cout<<"Yes"<<'\n';
                flag=true;
                break;
            }
        }
        if(!flag)cout<<"No"<<'\n';
    }
    return 0;
}