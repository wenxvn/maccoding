#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;cin>>a;
    while(a){
        cout<<a%10;
        a/=10;
    }
    return 0;
}