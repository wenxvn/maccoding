#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;cin >> a >> b;
    vector<bool> isSquare(b + 1, false);
    for (int i = 1; i * i <= b; i++) {
        isSquare[i * i] = true;
    }
    int l = sqrt(a);
    while (l * l < a) l++;
    int r = sqrt(b);
    while ((r + 1) * (r + 1) <= b) r++;
    for (int i = l; i <= r; i++) {
        int n = i * i;
        bool ok = false;
        for (int base = 10; base <= n; base *= 10) {
            int left = n / base;
            int right = n % base;
            if (left == 0) break;
            if (right == 0) continue; // 0, 00, 000 不算平方数
            if (isSquare[left] && isSquare[right]) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << n << '\n';
        }
    }
    return 0;
}