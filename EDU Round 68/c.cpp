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
const ll maxn = 1e3 + 7; //v
const ll maxm = 2e3 + 7; //

int a[maxn], b[maxn], c[maxn];
int main()
{
    int p;
    sd(p);
    while (p--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        char s[102], t[102], p[102];
        schstr(s);
        schstr(t);
        schstr(p);
        For(i, 0, strlen(s) - 1)
        {
            a[s[i] - 'a' + 1]++;
        }
        for (register int i = 0; i <= strlen(t) - 1; i = i + 1)
        {
            b[t[i] - 'a' + 1]++;
        }
        for (register int i = 0; i <= strlen(p) - 1; i = i + 1)
        {
            c[p[i] - 'a' + 1]++;
        }
        bool fl = true;
        For(i, 1, 26)
        {
            if (c[i] < b[i] - a[i])
            {
                pchstr("NO\n");
                fl = false;
                break;
            }
        }
        if (fl)
            pchstr("YES\n");
    }
    return 0;
}