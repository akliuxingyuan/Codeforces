/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-17 21:18:20
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-17 21:49:51
 * @Description: B
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
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
const ll maxn = 1e7 + 8;
const ll maxm = 1e7 + 8;

ll quick(ll x, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
            ans = ans * x % mod;
        n >>= 1;
        x = x * x % mod;
    }
    return ans;
}
int main()
{
    ll m, n;
    slld(n);
    slld(m);
    ll q = quick(2, m);
    plld(quick(q - 1, n));
    return 0;
}