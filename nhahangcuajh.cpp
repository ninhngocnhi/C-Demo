#include <stdio.h>
#include <math.h>
int main (){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int A[n];
	b=b*2;
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	long long s=0;
	for(int i=0;i<n;i++){
		if(A[i]==2){
			if(b<=1){
				s+=2;
			}
			else if(b>0){
				b-=2;
			}
		}
		else if(A[i]==1){
			if(a>0){
				a--;
			}
			else if(a==0){
				if(b>0){
					b--;	
				}
				else{
					s+=1;
				}
			}
		}
	}
	printf("%lld",s);
	return 0;
}

