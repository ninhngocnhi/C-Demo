#include <stdio.h>
#include <math.h>
int main() {
	int n , c;
	long long b;
	scanf ("%d", &n);
	b = pow(2,n);
	c = b % 1000000009;
	printf ("%d", c);
	return 0;
}

