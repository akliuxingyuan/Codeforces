/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-11 20:34:30
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-11 20:54:36
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

int a[20];
char t[maxn];
int main()
{
    int n;
    sd(n);
    schstr(t);
    For(i, 0, n - 1)
    {
        if (t[i] == 'L')
        {
            For(i, 0, 9)
            {
                if (!a[i])
                {
                    a[i] = 1;
                    break;
                }
            }
        }
        else if (t[i] == 'R')
        {
            rFor(i, 9, 0)
            {
                if (!a[i])
                {
                    a[i] = 1;
                    break;
                }
            }
        }
        else
        {
            a[t[i] - '0'] = 0;
        }
    }
    For(i, 0, 9)
    {
        pd(a[i]);
    }
    return 0;
}