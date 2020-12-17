#include <bits/stdc++.h>
#define sd(i) scanf("%d",&i)
#define pd(i) printf("%d",i)
#define slld(i) scanf("%lld",&i)
#define plld(i) printf("%lld",i)
#define newline printf("\n");

using namespace std;
typedef long long ll;
const ll N=1e9;
const ll M=1e9;

int main()
{
    int t;
    sd(t);
    int n;
    int sum=0;
    int bcnt,ccnt;
    ll tem;
    while(t--)
    {
        bcnt=0;
        ccnt=0;
        sum=0;
        sd(n);
        newline;
        for(int i=1;i<=n;i++)
        {
            slld(tem);
            if(tem%3==0)
                sum++;
            else if(tem%3==1)
                bcnt=bcnt+1;
            else
                ccnt=ccnt+1;
        }
        pd(sum+min(ccnt,bcnt)+(max(ccnt,bcnt)-min(ccnt,bcnt))/3);
        newline;
    }
    system("pause");
    return 0;
}