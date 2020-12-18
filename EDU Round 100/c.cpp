/*
 * @Author: akliuxingyuan
 * @Date: 2020-12-18 19:28:28
 * @Description: https://codeforces.com/contest/1463/problem/C
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
#define INF 0x3f3f3f3f3f3f3f3f
#define magic 0x5f375a86
typedef long long ll;
typedef pair<int, int> pii;
const ll maxn = 1e7 + 8;

ll t[100000 + 8], x[100000 + 8];

int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("Input.in", "r", stdin);
    //freopen("Output.out", "w", stdout);
#endif
    int tc, n;
    cin >> tc;
    while (tc--) {
        cin >> n;
        rep(i, 1, n) {
            cin >> t[i] >> x[i];
        }
        t[n + 1] = INF;

        ll cur = 0, goal = 0, success = 0;
        rep(i, 1, n) {
            if (cur == goal) goal = x[i];
            ll last = cur;
            ll time = t[i + 1] - t[i];
            if (abs(goal - cur) <= time) {
                cur = goal;
            } else {
                cur = goal < cur ? cur - time : cur + time;
            }
            if (last <= x[i] && x[i] <= cur || last >= x[i] && x[i] >= cur) {
                success++;
            }
        }
        cout << success << endl;
    }
    return 0;
}