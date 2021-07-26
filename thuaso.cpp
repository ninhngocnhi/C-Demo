#include <stdio.h>
#include <math.h>
int main() {
	int n,s,a;
	scanf ("%d", &n);
	for (int i =2;i <= n; i++){
		int k= n%i;
		int dem=0;
		if (k==0){
			for (int e=1;; e++){
				a= pow(i,e);
 				s=n%a;
 				if (s==0){
 					dem++;
 				}
 				else break;
			}
			n=n/(pow(i,dem));
		}
		if (dem !=0){
			printf ("%d %d",i, dem);
			printf ("\n");
		}
	}
	
 	return 0;
}

