#include <stdio.h>
int main() {
	int T;
	scanf ("%d",&T);
	for (int i=1;i<=T;i++){
		int a,b,c,d,dem=0;
		scanf ("%d%d%d%d",&a,&b,&c,&d);
		for (int j=1; j<= a/b;j++){
			if (b*j<c){
				dem++;
			}
			if (b*j>d){
				dem++;
			}
		}
		printf ("%d\n",dem);
	}
	return 0;
}

