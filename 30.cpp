#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
        if(sum>=2026)sum%=2026;
    }
    cout<<sum;
    return 0;
}