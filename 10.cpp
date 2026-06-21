#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum/=n;
    int ans=0;
    for(int i:a){
        if(i>sum)ans++;
    }
    cout<<ans;
    return 0;
}