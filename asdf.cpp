#include <stdio.h>
#include <math.h>
int main (){
	long long a,b,s,S,c=100005;
	scanf ("%lld%lld",&a,&b);
	s=pow(a,b);
	S=s%c;
	printf ("%lld",s);
	return 0;
}


