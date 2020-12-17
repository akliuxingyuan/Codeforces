/*
 * @Author: akliuxingyuan
 * @Date: 2019-11-02 22:44:24
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-11-02 23:54:49
 * @Description: C. Constanze's Machine https://codeforces.com/contest/1245/problem/C
 * @Status: Accepted 31ms
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
#define sdd(i, j) scanf("%d%d", &i, &j)
#define slldd(i, j) scanf("%lld%lld", &i, &j)
#define sdt(i, j, k) scanf("%d%d%d", &i, &j, &k)
#define slldt(i, j, k) scanf("%lld%lld%lld", &i, &j, &k)
#define sd(i) scanf("%d", &i)
#define pd(i) printf("%d", i)
#define slld(i) scanf("%lld", &i)
#define plld(i) printf("%lld", i)
#define schstr(i) scanf("%s", i)
#define pchstr(i) printf("%s", i)
#define For(i, begin, end) for (register int i = begin; i <= end; ++i)
#define rFor(i, begin, end) for (register int i = begin; i >= end; --i)
#define newline printf("\n")
#define pause system("pause")
#define test printf("after\n")
#define DEBUG
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;
const ll maxn = 1e5 + 8;
const ll maxm = 1e7 + 8;
// push_back emplace_back

char buf[maxn];
int dp[maxn][2];

int main()
{
    #ifdef DEBUG
        freopen("data.in", "r", stdin);
        // freopen("data.out", "w+", stdout);
    #endif
    dp[2][1]=1;
    dp[2][0]=1;
    For(i,3,maxn)
    {
        dp[i][1]+=(dp[i-1][1]+dp[i-1][0])%mod;
        dp[i][0]+=dp[i-1][1]%mod;
    }
    schstr(buf);
    int len = strlen(buf);
    int index;
    ll cpx=1ll;
    for(int i=0;i<len;)
    {
        if(buf[i]=='w'||buf[i]=='m')
            return pd(0),0;
        index = i;
        if(buf[i]!='u'&&buf[i]!='n')
        {
            ++i;
            continue;
        }
        while(i+1<len && buf[i+1]==buf[i])++i;
        ++i;
        if(i!=index+1)
        {
            cpx = (cpx*(dp[i-index][1]+dp[i-index][0]))%mod;
        }
    }
    plld(cpx);
    return 0;
}