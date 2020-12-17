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

ll n, k;
bool check(ll mid)
{
    if(mid*(mid+1)/2<=k+n-mid)
    {
        return true;
    }
    return false;
}
int main()
{
    slld(n);
    slld(k);
    // ll x;
    // x = ((sqrt(8 * (n + k) + 9) - 3) / 2) * ((sqrt(8 * (n + k) + 9) - 3) / 2) - ((sqrt(8 * (n + k) + 9) - 3) / 2);
    // x = x / 4;
    // plld((n - k) / 2 + x + 1 / 2);
    ll l = 0, r = n, ans=0;
    while (l <= r)
    {
        ll mid = l + r >> 1;
            // cout << mid << endl;
        if (check(mid))
        {
            l = mid + 1;
            ans = n - mid;
        }
        else
            r = mid - 1;
    }
    plld(ans);
    return 0;
}