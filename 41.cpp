#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    int a,b;cin>>a>>b;
    for(int i=a;i<s.size()-b;i++){
        cout<<s[i];
    }
    return 0;
}