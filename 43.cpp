#include<bits/stdc++.h>
using namespace std;
#define int long long
int g(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int f(int x){
    if(x<=5)return x*x+x*2+1;
    else {
        return g(pow(f(x/2),2))+g(x/5);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int ans=f(n);
    cout<<ans;
    return 0;
}