#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int p=i;p<=j;p++)sum+=a[p];
            while(sum){
                ans+=sum%2;
                sum/=2;
            }
        }
    }
    cout<<ans;
    return 0;
}