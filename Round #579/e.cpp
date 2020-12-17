/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-14 00:36:52
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-14 01:13:57
 * @Description: E
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
const ll maxn = 1e5 + 7;
const ll maxm = 1e7 + 7;

int a[maxn], b[maxn];
int main()
{
    int n;
    sd(n);
    For(i, 1, n)
    {
        sd(a[i]);
        b[a[i]]++;
    }
    int num = 0, ans = 0, l;
    for (int i = 1; i <= n;)
    {
        num = 0;
        l = i;
        for (; i <= n && b[i] != 0; i++)
        {
            num += b[i];
        }
        cout << l << " " << i << endl;
        if (num > i - l)
        {
            ans += i - l;
        }
        else
        {
            if (i > 1 && b[i - 1] & 1)//不对的，还要考虑b[i]>=2
            {
                ans++;
            }
            if (num > i - l + 1 && b[++i] & 1)//同理
            {
                ans++;
                b[i] = 1;
            }
        }
        for (; i <= n && b[i] == 0; i++)
            ;
    }
    pd(ans);
    return 0;
}