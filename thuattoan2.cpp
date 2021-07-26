#include <stdio.h>
#include <math.h>
#define m 1000000007
/*

*/
long long power(long long a,long long b ){
	if(b==0) return 1;
	if(b==1) return a;
	long long x = power(a,b/2);
	if(b%2 == 1) return x*x%m*a%m;
	else return (x*x)%m;
}      
int main (){
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		long long n;
		scanf("%lld",&n);
		if(n<3) printf("%d\n",n);
		else{
			int a=n/3;
			int b= n-3*a;
			long long S;
			if(b==0){
				S=power(3,a)%m;
			}
			else if (b==1){
				S=power(3,a-1)%m;
				S=S*4%m;
			}
			else{
				S=power(3,a)%m;
				S=S*2%m;
			}
			printf("%lld\n",S);
			}
		}
	return 0;
}

