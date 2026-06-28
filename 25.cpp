#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>s(n+1);
    int pos=0;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        s[++pos]=t;
        int p=pos;
        while(p>1&&s[p]<s[p/2]){
            swap(s[p],s[p/2]);
            p/=2;
        }
    }
    unordered_map<int,int>mp;
    for(int i=1;i<=pos;i++)mp[s[i]]=i;
    string line;
    getline(cin,line);
    while(m--){
        getline(cin,line);
        int x,y;
        bool ans=false;
        if(line.find("root")!=string::npos){
            sscanf(line.c_str(),"%d is the root",&x);
            ans=(mp[x]==1);
        }
        else if(line.find("siblings")!=string::npos){
            sscanf(line.c_str(),"%d and %d are siblings",&x,&y);
            ans=(mp[x]/2==mp[y]/2);
        }
        else if(line.find("parent")!=string::npos){
            sscanf(line.c_str(),"%d is the parent of %d",&x,&y);
            ans=(mp[x]==mp[y]/2);
        }
        else{
            sscanf(line.c_str(),"%d is a child of %d",&x,&y);
            ans=(mp[x]/2==mp[y]);
        }
        if(ans)cout<<"T"<<'\n';
        else cout<<"F"<<'\n';
    }
    return 0;
}