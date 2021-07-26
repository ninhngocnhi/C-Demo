#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i=2;i<=(n/2);i++){
		for(int j=2;j<=n/i;j++){
			s=s+j;
		}
	}
	printf("%d",4*s);
	return 0;
}

