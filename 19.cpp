#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>qian,zhong;
vector<vector<int>>level;
vector<int>ans;
void dfs(int qleft,int qright,int zleft,int zright,int depth){
    if(qleft>qright)return ;
    int root=qian[qleft];
    level[depth].push_back(root);
    int k=zleft;
    while(zhong[k]!=root)k++;
    int leftLen=k-zleft;
    //镜像后先右子树
    dfs(qleft+leftLen+1,qright,k+1,zright,depth+1);
    //再左子树
    dfs(qleft+1,qleft+leftLen,zleft,k-1,depth+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    qian.resize(n);
    zhong.resize(n);
    level.resize(n);
    for(int i=0;i<n;i++)cin>>zhong[i];
    for(int i=0;i<n;i++)cin>>qian[i];
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