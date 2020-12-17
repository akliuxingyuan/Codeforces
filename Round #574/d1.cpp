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
#define newline printf("\n");
#define pause system("pause");
typedef long long ll;
const ll mod = 1e9 + 7;
const ll maxn = 1e5 + 7; //v
const ll maxm = 2e3 + 7; //e

ll a[100010];
ll su[40];

int main()
{
    memset(su, 0, sizeof(su));
    ll n, te;
    slld(n);
    For(i, 1, n)
    {
        slld(a[i]);
        te = a[i];
        int cnt = 0;
        while (te)
        {
            su[++cnt] += te % 10;
            te /= 10;
        }
    }
    ll ans = 0;
    ll mod2 = 998244353;
    For(i, 1, n)
    {
        ll t = a[i];
        int cnt = 0;
        while (t)
        {
            ++cnt;
            ans = (ans + n * (t % 10) * (ll)pow(10, cnt * 2 - 1))% mod2;
            ans = (ans + su[cnt] * (ll)pow(10, cnt * 2 - 2)) % mod2;
            t /= 10;
        }
    }
    plld((mod2+ans)%mod2);
    return 0;
}