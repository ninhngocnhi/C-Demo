#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("\n");
		for(int j=1;j<=n;j++){
			if(i==1 || i== (n+1)/2 || i==n){
				printf("* ");
			}
			else {
				if(j==1 || j==i || j==(n+1)/2 || j== n-i+1 || j==n){
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
		}
	}
	return 0;
}

