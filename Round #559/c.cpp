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

int b[maxn];
int g[maxn];

int main()
{
    int n, m;
    sd(n);
    sd(m);
    ll sum = 0;
    For(i, 1, n)
    {
        sd(b[i]);
        sum += b[i];
    }
    For(i, 1, m)
    {
        sd(g[i]);
    }
    sort(b + 1, b + n + 1);
    sort(g + 1, g + m + 1);

    if (g[1] < b[n])
    {
        pd(-1);
        return 0;
    }
    sum -= b[n];
    sum *= m;
    For(i, 1, m)
    {
        sum += g[i];
    }
    if(b[n]==g[1]);
    else
    {
        sum = sum - b[n - 1] + b[n];
    }
    plld(sum);
    return 0;
}