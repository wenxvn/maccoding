#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;cin>>a>>b;
    if(a%2)cout<<-b;
    else cout<<b;
    return 0;
}