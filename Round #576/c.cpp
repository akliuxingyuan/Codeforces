/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-30 22:21:51
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-31 00:42:27
 * @Description: Problem C
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

map<int, int> a;
set<int> b;
int r[400010], s[400010];
int main()
{
    int n, disk;
    sd(n);
    sd(disk);
    int t;
    For(i, 1, n)
    {
        sd(t);
        b.insert(t);
        a[t]++;
    }
    ll as = 1 << (disk * 8 / n);
    while (ceil(log2(as)) * n < (disk * 8))
    {
        as <<= 1;
    }
    while (ceil(log2(as) * n > (disk * 8)))
    {
        as >>= 1;
    }
    if (b.size() <= as)
    {
        pd(0);
        return 0;
    }
    int cnt = 0, te = 0;
    int ans = inf;
    for (auto i : b)
    {
        r[++cnt] = i;
    }
    cnt = 0;
    for (map<int, int>::iterator it = a.begin(); it != a.end(); it++)
    {
        cnt++;
        s[cnt] = s[cnt - 1] + (*it).second;
    }
    For(i, 1, b.size() - as + 1)
    {
        te = 0;
        te += s[i - 1] - s[0] + s[b.size()] - s[i + as - 1];
        ans = min(ans, te);
    }
    pd(ans);
    return 0;
}