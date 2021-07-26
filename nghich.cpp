#include <stdio.h>
int main() {
	int n,k,x,dem=0;
	scanf ("%d%d",&n,&k);
	int a[k];
	for (int i=0;i<k;i++){
		scanf ("%d",&a[i]);
	}
	for (int i=a[0];i<=n;i++){
		for (int j= a[1];j<=n;j++){
			x=n-a[j]-a[i];
			if (x>=a[2]) dem++;
			else break;
		}
	}
	printf ("%d",dem);
	return 0;
}

