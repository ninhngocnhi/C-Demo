#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
main ()
{
	int n,i,j;
	long long q=0;
	long long a[100000];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(__gcd( a[i],a[j] )>1 && i!=j)
			{
				break;
			}
		}
		if(j==n)
		{
			q=max(q,a[i]);
		}
	}
	cout << q;
 return 0;
}

