#include<stdio.h>
#include<math.h>
int main()
{
	int  n, dem;
	scanf("%d", &n);
	while (n!=0)
	{
	dem = 0;
	int a[n+1];
	int kt[n+1];
	for (int i = 1; i <= n; i++) kt[i] = 0;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
	 	if ((a[i] <= n) && (kt[a[i]] != 1))
			 { dem++;
			   kt[a[i]] = 1;
				 }	
	if (dem==n) printf("YES\n");
	else printf("NO\n");
	scanf("%d", &n);
	}
	
}
