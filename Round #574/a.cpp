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

int a[1020];
int main()
{
    int n, k;
    memset(a, 0, sizeof(a));
    sd(n);
    sd(k);
    int t;
    For(i, 1, n)
    {
        sd(t);
        a[t]++;
    }
    int ans = 0, sum = 0;
    For(i, 1, k)
    {
        while (a[i] >= 2)
        {
            a[i] -= 2;
            sum++;
            ans += 2;
            // cout << i << " " << a[i] << " sum" << sum << endl;
        }
    }
    ans += ((n + 1) >>1) - sum;
    pd(ans);

    return 0;
}