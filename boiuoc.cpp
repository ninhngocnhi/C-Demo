#include <stdio.h>
#include <algorithm>
using namespace std;
long long gcd(long long x, long long y) { 
	return (!y) ? x : gcd(y, x%y); 
}
long long lcm(long long x, long long y) {
	return ((x / gcd(x, y))*y); 
}
int main (){
	long long a,b;
	for(;;){
		scanf ("%lld%lld",&a,&b);
		long long boi = gcd(a,b);
		long long uoc = lcm(a,b);
		printf("%lld %lld\n",boi,uoc);
//		if(a==0 && b==0){
//			break;
//		}
//		else{
//			long long c=__gcd(a,b);
//			printf ("%lld ",c);
//			long long d=a*b/c;
//			printf ("%lld\n",d);
//		}
	}
	return 0;
}

