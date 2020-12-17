/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-25 11:24:35
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-25 12:52:28
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
const ll maxn = 2e5 + 7;
const ll maxm = 1e7 + 7;

char a[maxn];
int pre[3][maxn];
int main()
{
    int q, n, k;
    int ans;
    sd(q);
    while (q--)
    {
        ans = inf;
        sd(n), sd(k);
        schstr(a + 1);
        For(i, 1, n)
        {
            if ((i % 3 == 0 && a[i] != 'R') || (i % 3 == 1 && a[i] != 'G') || (i % 3 == 2 && a[i] != 'B'))
                pre[0][i] = pre[0][i - 1] + 1;
            else
                pre[0][i] = pre[0][i - 1];
            if ((i % 3 == 1 && a[i] != 'R') || (i % 3 == 2 && a[i] != 'G') || (i % 3 == 0 && a[i] != 'B'))
                pre[1][i] = pre[1][i - 1] + 1;
            else
                pre[1][i] = pre[1][i - 1];
            if ((i % 3 == 2 && a[i] != 'R') ||( i % 3 == 0 && a[i] != 'G') || (i % 3 == 1 && a[i] != 'B'))
                pre[2][i] = pre[2][i - 1] + 1;
            else
                pre[2][i] = pre[2][i - 1];
        }
        For(i, k, n)
        {
            For(j, 0, 2)
                ans = min(ans, pre[j][i] - pre[j][i - k]);
        }
        pd(ans);
        newline;
    }
    return 0;
}
