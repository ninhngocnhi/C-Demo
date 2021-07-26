#include <bits/stdc++.h>
#define for0(i,n)   for(LL i=0;i<n;i++)
#define for1(i,n)   for(LL i=1;i<=n;i++)
using namespace std;
double xa,ya,xb,yb,xc,yc;
double f(double x)
{
    double AD=sqrt((xa-x)*(xa-x) + ya*ya);
    double BD=sqrt((xb-x)*(xb-x) + yb*yb);
    double CD=sqrt((xc-x)*(xc-x) + yc*yc);
    return  AD+BD+CD;
}
int main ()
{
    cin >> xa >> ya >> xb>> yb >> xc >> yc;
    double rr=max(xa,max(xb,xc));
    double ll=min(xa,min(xb,xc));
    double ml=(ll+ll+rr)/3.0;
    double mr=(ll+rr+rr)/3.0;
    while(ll!=ml && ml!=mr && mr!=rr)
    {
        if(f(ml) > f(mr)) ll=ml;
        else rr=mr;
        ml=(ll+ll+rr)/3.0;
        mr=(ll+rr+rr)/3.0;
    }
    printf("%.6lf",(ll+rr)/2);
 return 0;
}
