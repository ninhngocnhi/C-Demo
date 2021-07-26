#include <stdio.h>
#include <math.h>
int main (){
	int l,r;
	scanf ("%d%d",&l,&r);
	int a=0;
	for (int n=l;n<=r;n++){
		int s=1;
		for(int j=2;j<=sqrt(n);j++){
			if(n%j==0){
				s=s+j;
				int d=n/j;
				if (d != j){
					s=s+d;
				}
			}
		}
		if (s>n){
			a++;
		}
	}
	printf ("%d",a);
	return 0;
}

