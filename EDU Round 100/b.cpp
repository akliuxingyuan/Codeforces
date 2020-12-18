/*
 * @Author: akliuxingyuan
 * @Date: 2020-12-18 18:47:28
 * @Description: https://codeforces.com/contest/1463/problem/B
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

ll a[54], sum[2];
int main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("Input.in", "r", stdin);
    //freopen("Output.out", "w", stdout);
#endif
    int t, n;
    cin >> t;
    while (t--) {
        sum[0] = sum[1] = 0;
        cin >> n;
        rep(i, 1, n) {
            cin >> a[i];
            sum[i & 1] += a[i];
        }
        int opt = sum[0] > sum[1];
        rep(i, 1, n) {
            if ((i & 1) ^ opt) {
                cout << a[i] << " ";
            } else {
                cout << "1 ";
            }
        }
        cout << endl;
    }

    return 0;
}