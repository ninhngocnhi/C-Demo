#include <stdio.h>
#include <math.h>
int main (){
	int T;
	long long n;
	scanf("%d",&T);
	for (int j=0 ; j<T; j++){
		scanf ("%lld",&n);
		if(-1<n && n<2){
			printf ("NO\n");
		} 
		else if(n==2){
			printf ("YES\n");
		}
		else if(n>2){
			int A=1;
			for(int i=2;i<=sqrt(n);i++){
				if (n%i==0){
					A=0;
					break;
				}	
			}
			if(A==0){
				printf ("NO\n");
			}
			else {
				printf ("YES\n");
			}
		}
	}
	return 0;
}

