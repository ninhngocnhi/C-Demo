#include <stdio.h>

int main() {
	int h;
	scanf ("%d",&h);
	for (int i=1;i<=h+1;i++){
		for (int j=i-1;j>=1;j--){
			printf("%d",j);
		}
		printf ("\n");
	}
	return 0;
}

