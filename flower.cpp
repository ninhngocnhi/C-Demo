#include <stdio.h>
#include <math.h>
int main (){
	int n,t;
	scanf("%d%d",&n,&t);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int d1=0,d2=0;
	int s1=0,s2=0;
	for(int i=0;i<n;i++){
		if(s1 <= t){
			s1 += a[i];
			d1 ++;
		}
		if(s2 <= t){
			s2 += a[n-1-i];
			d2++;
		}
	}
	if(d1 < d2){
		printf("Jerry");
	}
	else if(d1 == d2){
		printf("Equal");
	}
	else{
		printf("Tom");
	}
	return 0;
}

