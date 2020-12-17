/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-11 20:56:01
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-11 21:23:51
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
const ll maxn = 1e7 + 7;
const ll maxm = 1e7 + 7;

int a[102];
int main()
{
    int t;
    int n, m, k;
    sd(t);
    while (t--)
    {
        sd(n), sd(m), sd(k);
        For(i, 1, n)
            sd(a[i]);
        bool fa = true;
        For(i, 1, n - 1)
        {
            if (a[i] < a[i + 1])
            {
                if (a[i] + m + k < a[i + 1])
                {
                    fa = false;
                    break;
                }
                else
                {
                    a[i + 1] < k ? m += a[i] : m += a[i] + k - a[i + 1];
                }
            }
            else
            {
                a[i + 1] < k ? m += a[i] : m += a[i] + k - a[i + 1];
            }
            
        }
        fa ? pchstr("YES\n") : pchstr("NO\n");
    }
    return 0;
}