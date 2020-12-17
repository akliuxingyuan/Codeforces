/*
 * @Author: akliuxingyuan
 * @Date: 2019-11-06 16:00:31
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-11-06 16:19:05
 * @Description: https://codeforces.com/contest/1245/problem/D
 * @Status: Pending
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
#define pdn(i) printf("%d\n", i)
#define plldn(i) printf("%lld\n", i)
#define pchstrn(i) printf("%s\n", i)
#define sdd(i, j) scanf("%d%d", &i, &j)
#define slldd(i, j) scanf("%lld%lld", &i, &j)
#define sdt(i, j, k) scanf("%d%d%d", &i, &j, &k)
#define slldt(i, j, k) scanf("%lld%lld%lld", &i, &j, &k)
#define sd(i) scanf("%d", &i)
#define pd(i) printf("%d", i)
#define slld(i) scanf("%lld", &i)
#define plld(i) printf("%lld", i)
#define schstr(i) scanf("%s", i)
#define pchstr(i) printf("%s", i)
#define For(i, begin, end) for (register int i = begin; i <= end; ++i)
#define rFor(i, begin, end) for (register int i = begin; i >= end; --i)
#define newline printf("\n")
#define pause system("pause")
#define test printf("after\n")
#define DEBUG
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;
const ll maxn = 2e3 + 8;
const ll maxm = 1e7 + 8;
// push_back emplace_back

// char buf[maxn];
// int a[maxn]

struct NODE
{
    int x, y;
    int c, k;
} city[maxn];

int main()
{
#ifdef DEBUG
    freopen("data.in", "r", stdin);
    // freopen("data.out", "w+", stdout);
#endif
    int n;
    sd(n);
    For(i, 1, n)
        sdd(city[i].x, city[i].y);
    For(i, 1, n)
        sd(city[i].c);
    For(i, 1, n)
        sd(city[i].k);

    return 0;
}