#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int ans=0;
    while(n--){
        int t;cin>>t;
        if(t%2026==0)ans++;
    }
    cout<<ans;
    return 0;
}