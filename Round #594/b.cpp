/*
 * @Author: akliuxingyuan
 * @Date: 2019-10-20 17:28:57
 * @LastEditors: akliuxingyuan
 * @LastEditTime: 2019-10-20 18:03:53
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
int a[100010];
int main()
{
    int n;
    scanf("%d",&n);
    long long minx=0;
    long long sum=0;
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n/2;++i)
        minx+=a[i];
    printf("%lld",minx*minx+(sum-minx)*(sum-minx));
    return 0;
}