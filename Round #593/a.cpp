/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-17 21:18:03
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-17 21:41:41
 * @Description: a 
 * @Status: Pending
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
#define mod 1000000007
#define inf 0x3f3f3f3f
typedef long long ll;
const ll maxn = 1e7 + 8;
const ll maxm = 1e7 + 8;

int main()
{
    int t,a,b,c;
    sd(t);
    while(t--)
    {
        sdt(a, b, c);
        int ans = 0;
        int tc = c / 2;
        if(tc<=b)
        {
            ans += 3 * tc;
            b -= tc;
            int tb = b / 2;
            if(tb<=a)
            {
                ans += 3 * tb;
            }
            else
            {
                ans += 3 * a;
            }
        }
        else
        {
            ans += 3*b;
        }
        pdn(ans);
    }
    return 0;
}