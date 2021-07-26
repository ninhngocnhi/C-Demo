#include <stdio.h>
#include <math.h>
int main() {
	int T,s,a,b,c,max;
	scanf("%d",&T);
	for (int i=1;i<=T;i++){
		scanf("%d %d %d %d", &s,&a,&b,&c);
		int count = s/c;
		int bonus = ((int) count / a) * b;
		max= count + bonus;
		printf ("%d", max);
	}
	return 0;
}

