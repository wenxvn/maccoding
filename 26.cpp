#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<vector<int>>cnt(n,vector<int>(26));
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(char c:s)cnt[i][c-'a']++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans+=
        }
    }
    cout<<ans;
    return 0;
}