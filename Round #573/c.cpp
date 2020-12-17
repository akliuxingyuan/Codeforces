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

ll a[maxn];
int main()
{
    ll n, k;
    int m;
    slld(n);
    sd(m);
    slld(k);
    For(i, 1, m)
    {
        slld(a[i]);
        plld(a[i]);
    }
    cout<<"af"<<endl;
    ll ans = 0,lazy = 0,x = 0,tem =0;
    for (int i = 1; i <= m;)
    {
        // cout << a[i];
        tem = 1;
        x = a[i] / k;
        while (i+1<=m&&(a[i+1] + lazy) / k == x)
        {
            tem++;
            i++;
        }
        lazy += tem;
        ans++;
    }
    plld(ans);
    return 0;
}