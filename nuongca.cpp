#include <stdio.h>
int main() {
int n,k,A,phut;
scanf ("%d %d",&n, &k);
if (n<=k){
	printf ("10");
}
else {
	A= (2*n+k-1)/k;
	phut= 5*A;
	printf ("%d", phut);
}
	return 0;
}

