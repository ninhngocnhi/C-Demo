#include <stdio.h>
#include <math.h>

int main() {
	int N,M,min,K;
	scanf ("%d %d",&N, &M);
	if(N==M){
		K=sqrt (2*N);
	}
	else {
		min= N;
		if (min > M) {
		min = M;
		}
		K= sqrt (2*min +1);
	}
	printf ("%d", K);
	return 0;
}

