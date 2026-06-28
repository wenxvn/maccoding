#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>zhong,qian,ans;
vector<vector<int>>level;
void dfs(int qleft,int qright,int zleft,int zright,int depth){
    if(qleft>qright)return;
    int root=qian[qleft];
    level[depth].push_back(root);
    int k=zleft;
    while(zhong[k]!=root)k++;
    int leftLen=k-zleft;
    //镜像，先右后左
    dfs(qleft+leftLen+1,qright,k+1,zright,depth+1);
    dfs(qleft+1,qleft+leftLen,zleft,k-1,depth+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    zhong.resize(n);
    qian.resize(n);
    level.resize(n);
    for(int i=0;i<n;i++)cin>>zhong[i];
    for(int j=0;j<n;j++)cin>>qian[j];
    dfs(0,n-1,0,n-1,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<level[i].size();j++){
            ans.push_back(level[i][j]);
        }
    }
    for(int i=0;i<ans.size();i++){
        if(i)cout<<" ";
        cout<<ans[i];
    }
    return 0;
}