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
const ll maxn = 5e3 + 7; //v

int x, y;
int a[maxn][maxn];
struct mxx
{
    int mx, id;
} p[maxn], rp[maxn];

struct myy
{
    int my, id;
} py[maxn], rpy[maxn];

int cmp(mxx a, mxx b)
{
    return a.mx > b.mx;
}
int cmp2(myy a, myy b)
{
    return a.my > b.my;
}
int check(int m, int n)
{
    int ans = x - rp[m].mx + y - rpy[n].my;
    if (a[m][n] == 0)
        ans--;
    return ans;
}
int main()
{
    int q;
    sd(q);
    while (q--)
    {
        memset(p, 0, sizeof(p));
        memset(py, 0, sizeof(py));
        memset(rp, 0, sizeof(rp));
        memset(rpy, 0, sizeof(rpy));
        memset(a, 0, sizeof(a));
        sd(x);
        sd(y);
        char op;
        getchar();
        For(i, 1, x)
        {
            For(j, 1, y)
            {
                op = getchar();
                if (op == '.')
                    a[i][j] = 0;
                else
                {
                    a[i][j] = 1;
                    p[i].id = i;
                    p[i].mx += 1;
                    py[j].id = j;
                    py[j].my += 1;

                    rp[i].id = i;
                    rp[i].mx += 1;
                    rpy[j].id = j;
                    rpy[j].my += 1;
                }
            }
            getchar();
        }
        sort(p + 1, p + x + 1, cmp);
        sort(py + 1, py + y + 1, cmp2);
        // For(i, 1, x)
        // {
        //     cout<< p[i].mx << " ";
        // }
        // newline;
        // For(i, 1, y)
        // {
        //     cout<< py[i].my << " ";
        // }
        // newline;
        // For(i, 1, x)
        // {
        //     For(j, 1, y)
        //     {
        //         cout
        //             << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        int maxp = p[1].mx;
        int maxpy = py[1].my;
        int mans = 2 * x + 2 * y;
        for (int i = 1; p[i].mx >= maxp - 1 && i <= x; i++)
        {
            for (int j = 1; py[j].my >= maxpy - 1 && j <= y; j++)
            {
                // cout << p[i].id << " " << py[j].id << endl;
                mans = min(mans, check(p[i].id, py[j].id));
            }
        }
        pd(mans);
        newline;
    }
    return 0;
}