/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-25 10:12:03
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-25 11:06:23
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
#define inf 0x3f3f3f3f
typedef long long ll;
const ll maxn = 2e3 + 7;
const ll maxm = 1e7 + 7;

char a[maxn];
int main()
{
    int q, n, k;
    int z, x, c, ans;
    sd(q);
    while (q--)
    {
        ans = inf;
        sd(n), sd(k);
        // scanf("%s", &a[1]);
        schstr(a + 1);
        /* For(i, 0, n)
        {
            putchar(a[i]);
        }
        newline; */
        For(i, k, n)
        {
            z = x = c = 0;
          /*   For(j, i - k + 1, i)
                putchar(a[j]);
            pchstr("--"), pd(i - k + 1), pchstr(" "), pd(i);
            newline; */
            For(j, i - k + 1, i)
            {
                if (((j - (i - k + 1)) % 3 == 0 && a[j] != 'R') || ((j - (i - k + 1)) % 3 == 1 && a[j] != 'G') || ((j - (i - k + 1)) % 3 == 2 && a[j] != 'B'))
                {
                    z++;
                }
                if (((j - (i - k + 1)) % 3 == 1 && a[j] != 'R') || ((j - (i - k + 1)) % 3 == 2 && a[j] != 'G') || ((j - (i - k + 1)) % 3 == 0 && a[j] != 'B'))
                {
                    x++;
                }
                if (((j - (i - k + 1)) % 3 == 2 && a[j] != 'R') || ((j - (i - k + 1)) % 3 == 0 && a[j] != 'G') || ((j - (i - k + 1)) % 3 == 1 && a[j] != 'B'))
                {
                    c++;
                }
            }
            /* cout << z << " " << x << " " << c << endl; */
            ans = min(ans, min(min(z, x), c));
        }
        pd(ans);
        newline;
    }
    return 0;
}