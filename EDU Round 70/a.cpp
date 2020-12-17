/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-07 22:32:27
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-07 22:50:56
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

char s[maxn], t[maxn];
int main()
{
    int T;
    sd(T);
    while (T--)
    {
        schstr(s);
        schstr(t);
        int le = strlen(s) - strlen(t);
        int idx;
        for (int i = strlen(t) - 1; i >= 0; i--)
        {
            if (t[i] == '1')
            {
                idx = i;
                break;
            }
        }
        int cnt = 0;
        for (int i = idx + le; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                break;
            }
            cnt++;
        }
        pd(cnt);
        newline;
    }
    return 0;
}