/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-13 22:26:50
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-13 23:51:05
 * @Description: B
 */
#include <unordered_map>
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
const ll maxn = 1e7 + 7;
const ll maxm = 1e7 + 7;

int a[500], b[200];
int main()
{
    int q, n;
    sd(q);
    while (q--)
    {
        sd(n);
        For(i, 1, 4 * n)
        {
            sd(a[i]);
        }
        bool fa = true;
        sort(a + 1, a + 4 * n + 1);
        double ans = 1;
        for (int i = 1; i <= 4 * n; i += 2)
        {
            if (a[i] != a[i + 1])
            {
                fa = false;
                break;
            }
            b[(i + 1) / 2] = a[i];
        }
        ll tem = b[1] * b[2 * n];
        if (fa)
        {
            For(i, 2, n)
            {
                if (b[i] * b[2 * n - i + 1] != tem)
                {
                    fa = false;
                    break;
                }
            }
        }
        fa ? pchstrn("YES") : pchstrn("NO");
    }
    return 0;
}