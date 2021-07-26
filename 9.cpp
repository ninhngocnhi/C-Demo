#include <stdio.h>
#include <math.h>
int main (){
	long long ngay,a,b,v;
	scanf("%lld%lld%lld",&a,&b,&v);
	ngay=(v+a-2*b-1)/(a-b);
	printf("%lld",ngay);
	return 0;
}

