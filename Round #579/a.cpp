/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-13 22:26:46
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-14 00:04:29
 * @Description: A
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

int a[2200];
int b[2200];
int main()
{
    int n, q;
    sd(q);
    while (q--)
    {
        bool fa = true;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        sd(n);
        int t;
        For(i, 1, n)
        {
            sd(a[i]);
            a[i + n] = a[i];
            if (a[i] == n)
            {
                t = i;
            }
        }
        // For(i,1,2*n)
        // {
        //     cout << a[i] << " ";
        // }
        // newline;
        int x = a[t + 1] - a[t];
        // cout << t << endl;
        if (x == -1)
        {
            For(i, t + 1, t + n - 1)
            {
                if (a[i] - a[i - 1] != -1)
                {
                    fa = false;
                    break;
                }
            }
        }
        else
        {
            For(i, t + 2, t + n - 1)
            {
                if (a[i] - a[i - 1] != 1)
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
