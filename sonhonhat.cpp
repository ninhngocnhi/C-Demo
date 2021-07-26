#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
long long bcnn(int a,int b){
	int c=__gcd(a,b);
	long long d=a*b/c;
	return d;
}
int main (){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int x,y,z,n;
		scanf("%d%d%d%d",&x,&y,&z,&n);
		long long s= bcnn(x,bcnn(y,z));
		long long A=pow(10,n-1),B=pow(10,n);
		int check=0;
		for(int i=1;;i++){
			if(s*i>=A && s*i<B){
				printf("%lld",s*i);
				check=1;
				break;
			}
			else if(s*i>=B){
				break;
			}
		}
		if(check==0){
			printf("-1");
		}
//		if(s<A){
//			if(A%s == 0){
//				printf("%lld\n",A);
//			}
//			else{
//				long long x=A/s;
//				long long ans=s*(x+1);
//				printf("%lld\n",ans);
//			}
//		}
//		else if(s>= A && s<B){
//			printf("%lld\n",s);
//		}
//		else if(s>= B){
//			printf("-1\n");
//		}
	}
	return 0;
}
