/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-24 19:51:46
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-24 23:27:59
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

int a[maxn], sum[maxn],in[maxn];
int main()
{
    int q, n, k;
    sd(q);
    while (q--)
    {
        sum[0] = 0;
        sd(n);
        sd(k);
        int cnt = 0;
        int index = 0;
        For(i, 1, n)
        {
            sd(a[i]);
            sum[i] = sum[i - 1] + (a[i]%2);
            if ((sum[i] - sum[index]) & 1)
            {
                index = i;
                cnt++;
                in[cnt] = i;
            }
        }
        if (cnt < k||(abs(cnt-k))&1)
        {
            pchstr("NO");
            newline;
        }
        else
        {
            pchstr("YES");
            newline;
            For(i,1,k-1)
            {
                pd(in[i]);
                pchstr(" ");
            }
            pd(n);
            newline;
        }
    }
    return 0;
}