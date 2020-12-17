/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-07 22:33:15
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-12 23:38:09
 * @Description: B
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
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
const ll maxn = 2e6 + 7;
const ll maxm = 1e7 + 7;

char str[maxn];
int a[maxn];
int _min(int a, int b)
{
    return a > b ? b : a;
}

int _max(int a, int b)
{
    return a < b ? b : a;
}
int exgcd(int a, int b, int &x, int &y)
{
    if (!b)
    {
        x = 1, y = 0;
        return a;
    }
    int ans = exgcd(b, a % b, y, x);
    y -= x * (a / b);
    return ans;
}
int main()
{
    schstr(str);
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] >= str[i - 1])
            a[i] = str[i] - str[i - 1];
        else
            a[i] = str[i] - str[i - 1] + 10;
    }
    int cnt = 0;
    int len = strlen(str) - 1;
    For(i, 0, 9)
    {
        For(j, 0, 9)
        {
            cnt = 0;
            if (j)
                pchstr(" ");
            if (i == 0 && j == 0)
            {
                cnt = -1;
                continue;
            }
            int m = _max(i, j);
            int n = _min(i, j);
            For(k, 1, len)
            {
                int t = a[k];
                int x, y, x2, y2;
                int g = exgcd(m, n, x, y);
                int g2 = exgcd(g, -10, x2, y2);
                if (t % g2)
                {
                    cnt = -1;
                    break;
                }
                else
                {
                    y2 = y2 * (t / g2);
                    int mul = g / g2;
                    y2 = (y2 % mul + mul) % mul;
                    t = t + 10 * y2;
                    x = x * (t / g);
                    y = y * (t / g);
                    int mou = n / g;
                    x = (x % mou + mou) % mou;
                    y = (t - x * m) / n;
                    cnt += x + y;
                }
            }
            pd(cnt);
        }
        newline;
    }
    return 0;
}