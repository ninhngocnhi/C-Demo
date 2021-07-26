#include <bits/stdc++.h>
using namespace std;
double a[1000000];
double b[1000000];
int n,i;
double Sum(double a[],double x)
{
	for(i=1;i<=n;i++) b[i]=a[i]-x;
	double sum1=0,sum2=0,ans1=0,ans2=0;
	for(i=1;i<=n;i++)
	{
		sum1=sum1+b[i];
		ans1=max(ans1,sum1);
		if(sum1<0)
		{
			sum1=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		b[i]=-b[i];
		sum2=sum2+b[i];
		ans2=max(ans2,sum2);
		if(sum2<0)
		{
			sum2=0;
		}
	}
	return max(fabs(ans1),fabs(ans2));
}
double T_search(double l,double r)
{	
	for(int i=1;i<=130;i++)
	{
		double x1 = (2*l+r) / 3.0;
		double x2 = (2*r+l) / 3.0;
		if (Sum(a,x1) < Sum(a,x2)) r = x2;
		else l = x1;
	}
	return Sum(a,l);
}
main ()
{
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	printf("%.6lf",T_search(-10000,10000));
 return 0;
}
