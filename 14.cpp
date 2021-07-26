#include <stdio.h>
#include <math.h>
int main (){
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	int dem=0;
	for(int i=a+1;i<=n;i++){
		if(i>=(a+1) && i>=(n-b) && i<=n){
			dem++;
		}
	}
	printf ("%d",dem);
	return 0;
}

