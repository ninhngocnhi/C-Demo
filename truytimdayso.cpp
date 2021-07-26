#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	long long  a[n],b[n/2];
	for(int i=1;i<=n/2;i++){
		scanf("%lld",&b[i]);
	}
	a[n]=b[1],a[1]=0;
	for(int i=2;i<=n/2;i++){
		if(b[i]>b[i-1]){
			a[n-i+1]=a[n-i+2];
			a[i]=b[i]-a[n-i+1];
		}
		else{
			a[i]=a[i-1];
			a[n-i+1]=b[i]-a[i];
		}
	}
	for(int i=1;i<=n;i++){
		printf("%lld ",a[i]);
	}
	return 0;
}

