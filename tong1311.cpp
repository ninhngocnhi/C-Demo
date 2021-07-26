#include <stdio.h>
int main() {
	int N,i;
	scanf ("%d", &N);
	int A[N+5];
	int s[N+5];
	for ( i = 1; i<=N ; i++){
		scanf ("%d", &A[i]);
	}
	s[0] = 0;
	for ( i = 1; i<=N ; i++){
		s[i] = s[i-1] + A[i];
	}
	for(int i=1; i<=N; i++) printf("%d ", s[i]);
	return 0;
}

