#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    vector<int>a(n+1);
    vector<bool>vis(n+1);
    int maxnum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxnum=max(maxnum,a[i]);
    }
    for(int t=1;t<=n;t++){
        int p=1;
        
    }
    return 0;
}