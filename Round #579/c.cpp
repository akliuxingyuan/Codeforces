/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-13 22:26:56
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-14 00:59:30
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
#define pdn(i) printf("%d\n", i)
#define plldn(i) printf("%lld\n", i)
#define pchstrn(i) printf("%s\n", i)
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
const ll maxn = 4e5 + 7;
const ll maxm = 1e7 + 7;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
set<ll> t;
int n;
// void slove(ll x)
// {
//     if (t.count(x))
//         return;
//     t.insert(x);
//     for (ll i = 1; i <= min((ll)sqrt(x) + 1, x); i++)
//     {
//         if (x % i == 0)
//         {
//             slove(i);
//             slove(x / i);
//         }
//     }
// }
// ll qw = 1;
// void slove(ll x)
// {
//     int cnt = 0;
//     For(i, 2, x)
//     {
//         cnt = 0;
//         if (x % i == 0)
//         {
//             while (x % i == 0)
//             {
//                 cnt++;
//                 x /= i;
//             }
//             qw *= (cnt + 1);
//         }
//     }
// }
ll slove(ll n)
{
    ll r = (ll)sqrt(1.0 * n);
    ll sum = 0;
    if (r * r == n)
    {
        sum++;
        r--;
    }
    for (ll i = 1; i <= r; i++)
    if (n % i == 0)
    {
        sum += 2;
    }
    return sum;
}
ll a[maxn];
int main()
{
    sd(n);
    For(i, 1, n)
    {
        slld(a[i]);
    }
    ll ans=a[1];
    For(i, 2, n)
    {
        ans = gcd(a[i], ans);
    }
    // cout << ans << endl;
    // slove(ans);
    // ans = (ll)(t.size());
    plld(slove(ans));
    return 0;
}