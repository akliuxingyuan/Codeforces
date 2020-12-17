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
#define newline printf("\n");
#define pause system("pause");
typedef long long ll;
const ll mod = 1e9 + 7;
const ll maxn = 3e5 + 7; //v
const ll maxm = 2e3 + 7; //e

char a[102];
int main()
{
    int n;
    sd(n);
    schstr(a);
    int ans = 0;
    For(i,0,n-1){
        if(a[i]=='-')
            ans--;
        if(a[i]=='+')
            ans++;
        if(ans<0)
            ans = 0;
    }
    pd(ans);
    return 0;
}