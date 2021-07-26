#include <stdio.h>

int main() {
	int n,s;
	scanf ("%d", &n);
	s=0;
	for(int i=1; i <= n; i++){
		if (i%2==1){
			s=s+i;
		}	
	}
	printf("%d",s);
	return 0;
}

