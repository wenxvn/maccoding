#include <bits/stdc++.h>
using namespace std;
// father[i] 表示编号 i 的人所属集合的父节点
int father[105];
/*
    查找 x 所在朋友圈的代表人物（根节点）
    例如：
    1 的父节点是 2
    2 的父节点是 3
    3 的父节点是自己
    那么 1、2、3 属于同一个朋友圈，根节点是 3。
*/
int findRoot(int x) {
    // 如果 x 的父节点不是自己，说明 x 还不是根节点
    if (father[x] != x) {
        // 继续向上查找根节点
        // 同时使用路径压缩，让以后查询更快
        father[x] = findRoot(father[x]);
    }
    return father[x];
}
/*
    合并 a 和 b 所在的两个朋友圈

    当 a 和 b 是朋友时：
    a 的朋友、朋友的朋友，都和 b 属于同一个朋友圈。
*/
void mergeFriend(int a, int b) {
    int rootA = findRoot(a);
    int rootB = findRoot(b);

    // 两人的根节点不同，说明目前不在同一个朋友圈
    if (rootA != rootB) {
        // 将其中一个朋友圈连接到另一个朋友圈
        father[rootA] = rootB;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    /*
        mp[{a,b}] 的含义：

         1：a 和 b 是直接朋友
        -1：a 和 b 是直接敌人
         0：a 和 b 没有直接关系

        由于关系是双向的，所以会同时保存：
        mp[{a,b}]
        mp[{b,a}]
    */
    map<pair<int, int>, int> mp;

    // 初始化并查集
    // 开始时每个人都只属于自己的朋友圈
    for (int i = 1; i <= n; i++) {
        father[i] = i;
    }

    // 输入 m 对关系
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        // 保存直接关系
        mp[{a, b}] = c;
        mp[{b, a}] = c;

        // 如果 a 和 b 是朋友，就合并他们的朋友圈
        if (c == 1) {
            mergeFriend(a, b);
        }
    }

    // 处理 k 次查询
    while (k--) {
        int a, b;
        cin >> a >> b;
        /*
            如果两个人的根节点相同，
            说明他们通过朋友关系连通。

            他们可能是直接朋友，也可能是：
            a -> 某人 -> 某人 -> b
        */
        bool isFriend = (findRoot(a) == findRoot(b));
        bool isEnemy = (mp[{a, b}] == -1);
        if (isFriend && !isEnemy) {
            cout << "No problem\n";
        }
        else if (!isFriend && !isEnemy) {
            cout << "OK\n";
        }
        else if (isFriend && isEnemy) {
            cout << "OK but...\n";
        }
        else {
            cout << "No way\n";
        }
    }
    return 0;
}