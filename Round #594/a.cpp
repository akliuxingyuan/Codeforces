/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-20 17:05:24
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-20 18:11:14
 * @Description: A
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

int main()
{
    int t,n,m;
    int p,q;
    long long ans=0;
    long long nn[2],mm[2];
    scanf("%d",&t);
    while(t--)
    {
        nn[0]=nn[1]=mm[0]=mm[1]=0;
        ans=0;
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&p);
            (p&1)?++nn[1]:++nn[0];
        }
        scanf("%d",&m);
        for(int i=1;i<=m;++i)
        {
            scanf("%d",&q);
            (q&1)?++mm[1]:++mm[0];
        }
        ans+=mm[1]*nn[1];
        ans+=mm[0]*nn[0];
        printf("%lld\n",ans);
    }
    return 0;
}