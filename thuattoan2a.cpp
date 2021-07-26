#include <stdio.h>
#include <math.h>
#define m 100000000
/*

*/
long long power(long long a,long long b ){
	if(b==0) return 1;
	if(b==1) return a;
	long long x = power(a,b/2);
	if(b%2 == 1) return x*x%m*a%m;
	else return (x*x)%m;
}      
int main (){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int a;
		scanf("%d",&a);
		long long b;
		scanf("%lld",&b);
		int s=power(a,b);
		int S=s%10;
		printf("%d\n",S);
	}

	return 0;
}

