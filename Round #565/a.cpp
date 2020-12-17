#include <bits/stdc++.h>
#define sd(i) scanf("%d",&i)
#define pd(i) printf("%d",i)
using namespace std;
typedef long long ll;
const ll N=1e9;
const ll M=1e9;

int cnt=0;
bool falg=true;
int slove(ll n)
{
    //cout<<"N"<<n<<endl;
    if(n==1)
    {
        return n;
    }
    if(n%2==0)
    {
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        if(slove(n)==1)
        {return 1;}
    }
    if(n%3==0)
    {
        while(n%3==0)
        {
            cnt++;
            n=(n/3)*2;
        }
        if(slove(n)==1)
        {return 1;}
    }
    if(n%5==0)
    {
        while(n%5==0)
        {
            cnt++;
            n=(n/5)*4;
        }
        if(slove(n)==1)
        {return 1;}
    }
    if(n%2!=0&&n%3!=0&&n%5!=0)
    {
        falg=false;
    }
    return -1;
}
int main()
{
    int q;
    sd(q);
    ll n;
    while(q--)
    {
        falg=true;
        cnt=0;
        sd(n);
        slove(n);
        if(falg)
            pd(cnt);
        else
        {
            pd(-1);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}