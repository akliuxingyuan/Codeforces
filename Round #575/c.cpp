/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-24 19:51:55
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-25 00:32:08
 * @Description: file content
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
#define mod 1e9 + 7
#define inf 100000
typedef long long ll;
const ll maxn = 2e5 + 7;
const ll maxm = 1e7 + 7;

int main()
{
    int q, n, tem[4], x, y;
    sd(q);
    while (q--)
    {
        int xx[4] = {inf, inf, -inf, inf};
        int yy[4] = {inf, -inf, inf, inf};
        sd(n);
        For(i, 1, n)
        {
            sd(x), sd(y);
            For(i, 0, 3)
            {
                sd(tem[i]);
            }
            if (tem[0] == 1 && tem[2] == 1)
                ;
            else
            {
                if (!tem[0])
                {
                    xx[2] = max(xx[2], x);
                }
                if (!tem[2])
                {
                    xx[0] = min(xx[0], x);
                }
            }
            if (tem[1] && tem[3])
                ;
            else
            {
                if (!tem[1])
                {
                    yy[3] = min(yy[3], y);
                }
                if (!tem[3])
                {
                    yy[1] = max(yy[1], y);
                }
            }
        }
        if (n == 1)
        {
            pd(1);
            pchstr(" ");
            pd(x);
            pchstr(" ");
            pd(y);
        }
        else
        { //     lim+    lin-   lim down  lim up
            if (xx[0] < xx[2] || yy[1] > yy[3])
            {
                pd(0);
                newline;
            }
            else
            {
                pd(1);
                pchstr(" ");
                pd((xx[0] + xx[2]) / 2);
                pchstr(" ");
                pd((yy[1] + yy[3]) / 2);
                newline;
            }
        }
    }
    return 0;
}