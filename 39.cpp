#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int a;
    int s[3]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0)s[0]+=a;
        if(a%3==0)s[1]+=a;
        if(a%5==0)s[2]+=a;
    }
    for(int i=0;i<3;i++)cout<<s[i]<<" ";
    return 0;
}