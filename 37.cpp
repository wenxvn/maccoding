#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    unordered_map<char,int>mp;
    for(char c:s)mp[c]++;
    int x=min(min(min(min(mp['M'],mp['A']),mp['T']),mp['J']),mp['I']/2);
    int y=min(min(min(min(mp['m'],mp['a']),mp['t']),mp['j']),mp['i']/2);
    cout<<x<<" "<<y;
    return 0;
}
//MATIJI和matiji