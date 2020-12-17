/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-20 18:54:25
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-20 19:17:40
 * @Description: file content
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
const ll maxn = 5e2 + 8;
const ll maxm = 1e7 + 8;

char a[maxn];
int main()
{
    int n;
    sd(n);
    getchar();
    char ch;
    stack<pair<char,int> >sk;
    bool fa=true;
    for(int i=1;i<=n;i++)
    {
        ch = char(getchar());
        a[i]=ch;
        if(ch==')'&&sk.top().first=='('&&fa)
            fa=false,sk.pop();
        else
            fa=true,sk.push(make_pair(ch,i));
    }
    int len=0;
    int mi,mj;
    while(sk.size)
    {
        pair<char,int> p = sk.top();
        sk.pop();
        if(p.first==')'&&sk.top().first=='(')
        {
            len = max(len,p.second-sk.top().first);
            sk.pop();
        }
    }
    
    printf("%d %d\n",mi,mj);
    return 0;
}