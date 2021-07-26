#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d",&n);
	float A[n];
	int dem=0;
	for(int i=0;i<n;i++){
		scanf("%f",&A[i]);
	}
	float max=A[1],min=A[1];
	for(int i=0;i<n;i++){
		if(max<A[i]){
			max=A[i];
		}
		if(min > A[i]){
			min=A[i];
		}
	}
	float check=(max+min)/2;
	for(int i=0;i<n;i++){
		if(A[i]==max || A[i]==min || A[i]==check){
			dem++;
		}
	}
	if(dem==n){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}

