#include<stdio.h>
#include <math.h>
typedef unsigned long long ull;
const ull mod=1e9+7;
ull l,r;
ull solve(ull x){
	double a1 = sqrt((double)2 * (double)x+0.25)-0.5;
	ull a2= a1,a,b,y;
	y=x-a2*(a2+1)/2;
	if(a2 %2 ==0 ){
		a= a2*a2/4 +y;
	}
	else{
		a= (a2+1)*(a2+1)/4;
	}
    b=x-a;
    a%=mod,b%=mod;
    ull ans=a*a%mod+b*b%mod+b;
    return ans%mod;
} 
int main(){
    scanf("%lld%lld",&l,&r);
    printf("%lld",(solve(r)-solve(l-1)+mod)%mod);
    printf("\n");
    return 0;
}
