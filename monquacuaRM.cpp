#include <stdio.h>
#include <math.h>
int main (){
	long long n;
	int m;
	scanf("%lld %d",&n,&m);
	int a[n];
	for (int j=1;j<=n;j++){
		scanf ("%d",&a[j]);
	}
	long long l,r;
	for (int i=1;i<=m;i++){
		scanf("%lld %lld",&l,&r);
		if (1<=l && l<=r && r<=n){
			long long s=0;
			for(int j=l;j<=r;j++){
				s=s+a[j];
			}
		printf ("%lld\n",s);
		}
	}
	return 0;
}
