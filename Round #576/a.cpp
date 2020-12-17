/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-30 22:21:38
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-30 23:12:37
 * @Description: Problem A
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
const ll maxn = 1e5 + 7;
const ll maxm = 1e7 + 7;

int a[maxn];
int main()
{
    int n, x, y;
    sd(n);
    sd(x);
    sd(y);
    For(i, 1, n)
        sd(a[i]);
    bool fa = true;
    For(i, 1, n)
    {
        // cout << i << endl;
        fa = true;
        for (int j = i; j >= 1 && j >= i - x; j--)
        {
            if (a[j] < a[i])
            {
                fa = false;
                break;
            }
        }
        if(!fa)
            continue;
        for (int j = i; j <= n && j <= i + y;j++)
        {
            if (a[j] < a[i])
            {
                fa = false;
                break;
            }
        }
        if (fa)
        {
            pd(i);
            return 0;
        }
    }
    // cout << "fs";
    return 0;
}