#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;cin>>a>>b;
    vector<bool> vis(b+1);
    for(int i=1;i*i<=b;i++)vis[i*i]=true;
    int left=sqrt(a);
    for(int i=left;i*i<=b;i++){
        if(i*i<a)continue;
        string num=to_string(i*i);
        for(int pos=1;pos<num.size();pos++){
            int x=stoi(num.substr(0,pos));
            int y=stoi(num.substr(pos));
            if(vis[x]&&vis[y]){
                cout<<i*i<<'\n';
                break;
            }
        }
    }
    return 0;
}