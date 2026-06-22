#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    if(x+y>z&&x+z>y&&y+z>x)return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(check(a[i],a[j],a[k]))ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}