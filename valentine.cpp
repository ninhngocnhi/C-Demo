#include <stdio.h>
#include <math.h>
int main (){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int white=0,black=0,max=0;
	for(int i=1;i<=n;i++){
		if(a[i]==-1){
			white++;	
		}
		else{
			black++;
		}
	}
	for(int j=1;j<=k;j++){
		int d=j, x= white, y=black;
		while(d<=n){
			if(a[d]==-1){
				x--;	
			}
			else{
				y--;
			}
			d=d+k;
		}
		int s=abs(x-y);
		if(max<s){
			max=s;
		}
	}      
	printf("%d",max);
	return 0;
}

