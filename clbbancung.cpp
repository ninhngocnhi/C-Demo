#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum=0;
	long long s=0;
	for(int i=n-1;i>0;i--){
		s+=a[i];
		sum+= a[i-1]*s;
	}
	printf("%lld",sum);
	return 0;
}

