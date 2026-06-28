#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int x,y;cin>>x>>y;
    int minx=x,maxx=x,miny=y,maxy=y;
    for(int i=1;i<n;i++){
        cin>>x>>y;
        minx=min(minx,x);
        maxx=max(maxx,x);
        miny=min(miny,y);
        maxy=max(maxy,y);
    }
    cout<<(maxx-minx)*(maxy-miny);
    return 0;
}