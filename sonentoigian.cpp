#include <stdio.h>
int main (){
	int T;
	scanf ("%d", &T);
	for (int i=1; i<=T; i++){
		long long n;
		scanf ("%lld", &n);
		while(n>=10){
			int s=0;
			for(;;){
				s += n%10;
				n/=10;
				if(n==0){
					n=s;
					break; 
				}	
			}
		}
		printf ("%d\n",n);
	}
	return 0;
}
