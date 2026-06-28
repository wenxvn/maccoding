#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    int ans=0;
    for(int i=0;i<m;i++){
        vector<int>cnt(26);
        for(int j=0;j<n;j++){
            cnt[s[j][i]-'a']++;
        }
        int same=0;
        for(int j=0;j<26;j++){
            same+=(cnt[j]*(cnt[j]-1))/2;
        }
        ans+=n*(n-1)/2-same;
    }
    cout<<ans;
    return 0;
}