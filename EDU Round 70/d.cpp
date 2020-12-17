/*
 * @Author: akliuxingyuan
 * @Date: 2019-08-07 22:33:41
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-08-08 00:41:42
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
const ll maxn = 1e7 + 7;
const ll maxm = 1e7 + 7;

int k[3], a[100000];
int find(int n)
{
    int l = 2, r = 100000;
    while(l<r)
    {
        int mid = l + r >> 1;
        if(mid==n)
        {
            return mid;
        }
        if(mid<n)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}
void slove(int n)
{
    rFor(i, sqrt(n), 2)
    {
        if (n % i == 0)
        {
            k[0] = i;
            k[2] = n / i;
            break;
        }
    }
    if (k[0] + k[2] <= 10000 - 2)
    {
        For(i, 1, k[0])
        {
            pd(1);
        }
        pd(33);
        For(i, 1, k[2])
        {
            pd(7);
        }
        return;
    }
    else
    {
        rFor(i, k[2]-1, 2)
        {
            if(k[2]%i==0)
            {
                if(count(a+2,a+100000,i))
                {
                    k[1] = find(i);
                    k[2] = k[2] / i;
                }
                else if(count(a+2,a+100000,k[2]/i))
                {
                    k[1] = find(k[2] / i);
                    k[2] = i;
                }
            }
        }
        For(i,1,k[0])
        {
            pd(1);
        }
        For(i,1,k[1])
        {
            pd(3);
        }
        For(i,1,k[2])
        {
            pd(7);
        }
    }
}
int main()
{
    int t, n;
    sd(t);
    a[2] = 1;
    For(i, 3, 100000)
    {
        a[i] = a[i - 1] + i - 1;
    }
    while (t--)
    {
        k[0] = 1;
        k[1] = 2;
        k[2] = 1;
        sd(n);
        slove(n);
        newline;
    }

    return 0;
}