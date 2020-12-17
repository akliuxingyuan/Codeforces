/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-24 19:49:24
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-24 22:43:04
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

ll a[5];
int main()
{
    int q;
    sd(q);
    while (q--)
    {
        slld(a[0]);
        slld(a[1]);
        slld(a[2]);
        sort(a, a + 3);
        if(a[2]<=a[1]-a[0])
        {
            plld(a[0]);
            newline;
        }
        else
        {
            plld(a[1] + (a[2] - a[1] + a[0]) / 2);
            newline;
        }
        
    }
    return 0;
}