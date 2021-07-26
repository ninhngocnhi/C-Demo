#include <stdio.h>
#include <math.h>
int main() {
	int a,b;
	float S;
	scanf("%d %d",&a, &b);
	S=((float)a/7+a*a*b-(float)sqrt(abs(a-b))+b*b*b*b*b)*(2*a+4*b);
	printf ("%.4f",S);
    return 0;
}

