#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;cin >> u >> v;
        g[u].push_back(v);g[v].push_back(u);
    }
    vector<int> vis(n + 1, 0);
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        long long cntV = 0;
        long long degSum = 0;
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cntV++;
            degSum += g[u].size();
            for (int v : g[u]) {
                if (!vis[v]) {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
        long long cntE = degSum / 2;
        if ((cntV % 2) == (cntE % 2)) ans += cntV;
        else ans += cntV - 1;
    }
    cout << ans << '\n';
    return 0;
}