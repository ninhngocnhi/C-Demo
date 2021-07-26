#include <stdio.h>
#include <math.h>
int main (){
	long long n;
	scanf("%lld",&n);
	long long s=n*(n+1)/2;
	int a=s%2;
	printf("%d",a);
	return 0;
}

