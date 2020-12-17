/*
 * @Author: akliuxingyuan
 * @Date: 2019-07-30 22:21:46
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-07-30 23:03:00
 * @Description: Problem B
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

int main()
{
    ll h, l;
    slld(h);
    slld(l);
    printf("%.10f", ((l * l) - (h * h)) * 1.0 / (2 * h));
    return 0;
}
