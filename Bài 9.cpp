#include <stdio.h>

int main() {
	long long n,S;
	scanf("%lld", &n);
	S= n*(n+1)*(2*n+1)/6;
	printf("%d", S);
	return 0;
}

