/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-25 14:19:50
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-25 17:17:22
 * @Description: B https://codeforces.com/contest/1251/problem/B
 * @Status: Accepted 46ms
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
// push back emplace_back

char a[54][54];
int main()
{
    int q, n;
    sd(q);
    while (q--)
    {
        int oddlennum = 0;
        int evenoddodd = 0;
        int ans = 0;
        sd(n);
        int cnt = 0;
        while (n--)
        {
            schstr(a[cnt]);
            int len = strlen(a[cnt]);
            if (len & 1)
            {
                int num0, num1;
                num0 = num1 = 0;
                ++oddlennum;
                ++ans;
            }
            else
            {
                int num0, num1;
                num0 = num1 = 0;
                For(i, 0, len - 1)
                {
                    (a[cnt][i] - '0') & 1 ? ++num1 : ++num0;
                }
                (num0 & 1) ? ++evenoddodd : ++ans;
            }
            cnt++;
        }
        ans += (evenoddodd / 2) * 2;
        evenoddodd -= 2 * (evenoddodd / 2);
        ans += min(oddlennum, evenoddodd);
        pdn(ans);
    }
    return 0;
}
/* 
4
3
1110
100110
010101
 */