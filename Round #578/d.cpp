/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-11 22:09:15
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-11 22:28:09
 * @Description: D
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
const ll maxn = 2e3 + 7;
const ll maxm = 1e7 + 7;

int dp[maxn][maxn];
char ch[maxn][maxn];
int main()
{
    int n, k;
    sd(n), sd(k);
    For(i, 1, n)
    {
        schstr(ch[i]);
    }
    For(i, 1, n)
    {
        pchstr(ch[i]);
        newline;
    }
    int ans = 0;
    For(i, 1, n)
    {
        For(j, 1, n)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + ch[i][j - 1] == 'B' ? 1 : 0;
            if(i>=k&&j>=k)
            {
                ans = max(ans, dp[i][j] - dp[i - k][j] - dp[i][j - k] + dp[i - k][j - k]);
            }
        }
    }
    pd(ans);
    return 0;
}