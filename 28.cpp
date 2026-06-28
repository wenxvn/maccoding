#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    unordered_map<int,int>mp;
    while(n--){
        int t;cin>>t;
        mp[t]++;
    }
    cout<<mp.size();
    return 0;
}