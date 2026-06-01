#include <bits/stdc++.h>
using namespace std;
int a, b;
bool isSquare(int x) {
    if (x <= 0) return false;
    int r = sqrt(x);
    return r * r == x || (r + 1) * (r + 1) == x;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> b;
    int num = sqrt(a);
    for (int i = num; ; i++) {
        int n = i * i;
        if (n < a || n < 10) continue;
        if (n > b) break;
        string p = to_string(n);
        for (int pos = 1; pos < (int)p.size(); pos++) {
            string sx = p.substr(0, pos);
            string sy = p.substr(pos);
            int x = stoi(sx);
            int y = stoi(sy);
            if (isSquare(x) && isSquare(y)) {
                cout << n << '\n';
                break;
            }
        }
    }
    return 0;
}