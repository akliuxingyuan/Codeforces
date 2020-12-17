#include <bits/stdc++.h>
using namespace std;
const long long maxn=1e18;

int main()
{
    long long n, m, k, ans = 0, x,a;
    scanf("%lld%lld%lld", &n, &m, &k);
    for (long long i = 1; i <= m;)//在线操作防止数组开的太大
    {
        scanf("%lld", &a);
        x =( a+i-2) / k;i++;
        while (i<=m&&scanf("%lld",&a)&& ((a+i-2) / k )== x)
        {
            i++;
        }
            i++;
        ans++;
    }
    printf("%lld\n", ans);
}