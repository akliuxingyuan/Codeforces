/*
 * @Author: akliuxingyuan
 * @Date: 2020-12-18 17:31:41
 * @Description: https://codeforces.com/contest/1463/problem/A
 */

#include <bits/stdc++.h>

using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define rep(i, begin, end) for (register int i = begin; i <= end; ++i)
#define revrep(i, begin, end) for (register int i = begin; i >= end; --i)
#define debug(x) cerr << #x << "=" << x << endl
#define eps 1e-12
#define mod 998244353
#define inf 0x3f3f3f3f
#define magic 0x5f375a86
typedef long long ll;
typedef pair<int, int> pii;
const ll maxn = 1e7 + 8;

int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("Input.in", "r", stdin);
    //freopen("Output.out", "w", stdout);
#endif
    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum < 9 || sum % 9 != 0) {
            cout << "NO" << endl;
            continue;
        }
        int minn = min(a, min(b, c));
        int rest = sum - 3 * minn;
        if (rest % 3) {
            cout << "NO" << endl;
        }
        int round = minn;
        while (rest % 6) {
            rest += 3;
            --round;
        }
        round = round - rest / 6;
        if (round >= 0 && round % 3 == 0) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}