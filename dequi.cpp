#include <stdio.h>
#include <math.h>
#define c 100005
	long long power(long long a,long long b){
		if (b==1) return a;
		long long tmp = power(a,b/2);
		tmp = tmp * tmp % c;
		if (b%2==1) tmp = tmp * a % c;
		return tmp;
	}
int main (){
	long long a,b;
	scanf ("%lld%lld",&a,&b);
	printf ("%lld",power(a,b));
	return 0;
}


