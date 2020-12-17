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
const ll maxn = 1e3 + 7; //v
const ll maxm = 2e3 + 7; //e
int n, m;

int main()
{
    string q, w, e;
    cin >> q >> w >> e;
    int ans = 23;
    if(q[1]==w[1]&&w[1]==e[1]){
        if(q[0]==w[0]&&w[0]==e[0])
        {
            pd(0);
            return 0;
        }
        else if(q[0]==w[0]||w[0]==e[0]||q[0]==e[0]){
            pd(1);
            return 0;
        }
        else
        {
            int a[] = {static_cast<int>(q[0]),static_cast<int>(w[0]), static_cast<int>(e[0])};
            sort(a, a + 3);
            if(a[0]==a[1]-1&&a[1]==a[2]-1){
                pd(0);
                return 0;
            }
            else if(a[0]==a[1]-1||a[1]==a[2]-1){
                pd(1);
            }
            else if(a[0]==a[1]-2||a[1]==a[2]-2)
                pd(1);
            else
            {
                pd(2);
                return 0;
            }
        }
    }
    else if(q[1]==w[1]||w[1]==e[1]||q[1]==e[1])
    {
        if(q[1]==w[1]){
            if(static_cast<int>(q[0])==static_cast<int>(w[0])||abs(static_cast<int>(q[0])-static_cast<int>(w[0]))==1||abs(static_cast<int>(q[0])-static_cast<int>(w[0]))==2)
                pd(1);
            else
            {
                pd(2);
            }
        }
        if(q[1]==e[1]){
            if(static_cast<int>(q[0])==static_cast<int>(e[0])||abs(static_cast<int>(q[0])-static_cast<int>(e[0]))==1||abs(static_cast<int>(q[0])-static_cast<int>(e[0]))==2)
                pd(1);
            else
            {
                pd(2);
            }
        }
        if(e[1]==w[1]){
            if(static_cast<int>(e[0])==static_cast<int>(w[0])||abs(static_cast<int>(e[0])-static_cast<int>(w[0]))==1||abs(static_cast<int>(e[0])-static_cast<int>(w[0]))==2)
                pd(1);
            else
            {
                pd(2);
            }
        }
    }
    else
    {
        pd(2);
    }
    return 0;
}