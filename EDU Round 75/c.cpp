/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-24 22:46:32
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-25 17:17:10
 * @Description: C https://codeforces.com/contest/1251/problem/C
 * @Status: Accepted 30ms
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
typedef unsigned long long ull;
const ll maxn = 3e6 + 8;
const ll maxm = 1e7 + 8;

char odd[maxn];
char even[maxn];
int main()
{
    int n;
    sd(n);
    while (n--)
    {
        schstr(odd);
        int oc = 0, ec = 0;
        int len = strlen(odd);
        For(i, 0, len - 1)
        {
            if ((odd[i] - '0') & 1)
            {
                odd[oc++] = odd[i];
            }
            else
            {
                even[ec++] = odd[i];
            }
        }
        odd[oc] = '\0';
        even[ec] = '\0';
        int lenodd = strlen(odd);
        int leneven = strlen(even);
        // cout<<lenodd<<" "<<leneven<<endl;
        int li = 0, lj = 0;
        while (li<lenodd&&lj<leneven)
        {
            // cout<<"odd " << odd[li]<<" even "<<even[lj]<<endl;
            if(odd[li]<even[lj])
            {
                putchar(odd[li]);
                ++li;
            }
            else
            {
                putchar(even[lj]);
                ++lj;
            }
        }
        while(li<lenodd)
        {
            putchar(odd[li++]);
        }
        while(lj<leneven)
        {
            putchar(even[lj++]);
        }
        newline;
    }
    return 0;
}