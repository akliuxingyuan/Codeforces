/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-11 21:25:05
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-11 22:06:09
 * @Description: C
 */
#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;
#define sd(i) scanf("%d", &i)
#define pd(i) printf("%d", i)
#define slld(i) scanf("%lld", &i)
#define plld(i) printf("%lld", i)
#define schstr(i) scanf("%s", i)
#define pchstr(i) printf("%s", i)
#define For(i, begin, end) for (register int i = begin; i <= end; i = i + 1)
#define rFor(i, begin, end) for (register int i = begin; i >= end; i = i - 1)
#define newline printf("\n")
#define pause system("pause")
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
const ll maxn = 1e7 + 7;
const ll maxm = 1e7 + 7;

ll n, m;
int q;
int main()
{
    slld(n), slld(m), sd(q);
    ll g = __gcd(n, m);
    ll t1 = n / g, t2 = m / g;
    ll x1, y1, x2, y2;
    ll l1, r1, l2, r2;
    For(i, 1, q)
    {
        slld(x1), slld(y1), slld(x2), slld(y2);
        if (x1 & 1)
        {
            l1 = (y1 - 1) / t1;
            r1 = l1 + 1;
        }
        else
        {
            l1 = (y1 - 1) / t2;
            r1 = l1 + 1;
        }
        if (x2 & 1)
        {
            l2 = (y2 - 1) / t1;
            r2 = l2 + 1;
        }
        else
        {
            l2 = (y2 - 1) / t2;
            r2 = l2 + 1;
        }
        // cout << l1 << " " << r1 << endl;
        // cout << l2 << " " << r2 << endl;

        ((r1 > l2 && r1 <= r2) || (r2 > l1 && r2 <= r1)) ? pchstr("YES\n") : pchstr("NO\n");
    }
    return 0;
}