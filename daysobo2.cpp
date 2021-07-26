#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==2){
			continue;
		}
		else{
			printf("%d\n",i);
		}
	}
	return 0;
}

