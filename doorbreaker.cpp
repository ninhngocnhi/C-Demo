#include <stdio.h>
#include <math.h>
int main (){
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(x>y){
		printf("%d",n);
	}
	else{
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]<=x){
				dem++;
			}
		}
		int s=(dem+1)/2;
		printf("%d",s);
	}
	return 0;
}

