#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    int ans = 0;
    for (int start = 0; start < N; start++) {
        vector<int> cards = a;
        int pos = start;
        int cnt = 1;
        int sum = 0;
        while (!cards.empty() && cnt <= N) {
            if (cards[pos] == cnt) {
                sum += cards[pos];
                cards.erase(cards.begin() + pos);
                if (cards.empty()) break;
                pos %= cards.size();
                cnt = 1;
            } else {
                pos = (pos + 1) % cards.size();
                cnt++;
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << '\n';
    return 0;
}