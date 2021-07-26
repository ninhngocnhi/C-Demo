#include <stdio.h>
#include <math.h>
    int kiemtra(int k, int x){
		if (k==2||k==3||k==5||k==7)  return 1;
		int A=1;
		x=k;
		for (int j=0;j<5;j++){
			for(int i=2;i<=sqrt(k);i++){
				if (k%i==0){
					A=0;
					break;
				}	
			}
			if (A==1){
				k = k/10;
			}
			printf ("%d\n",x);
		}	
	} 
int main (){
	int a,b;
	scanf ("%d %d", &a, &b);
	for (int k=a;k<=b;k++){
		int x;
		kiemtra(k, x);
	}
	return 0;
}
