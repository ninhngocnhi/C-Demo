#include <stdio.h>
#include <math.h>
int main (){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int s=0;
	for(int i=1;i<=n;i++){
		if(i>= n-b && i>a){
			s++;
		}
	}
	printf("%d",s);
	return 0;
}

