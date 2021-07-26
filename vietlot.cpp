#include <stdio.h>
#include <algorithm>
using namespace std;
int main (){
	int N,dem;
	scanf ("%d",&N);
	while (N!=0){
		int A=1;
		dem=0;
		int a[N];
			for (int j=0;j<N;j++){
				scanf("%d",&a[j]);
			}
			for (int j=0;j<N-1;j++){
				for (int i=0;i<N-1;i++){
					int k;
					if (a[i]>a[i+1]){
						k=a[i];
						a[i]=a[i+1];
						a[i+1]=k;
					}
				}
			}
			if (a[0]!=1) A=0;
			else if (a[0]==1){
				for (int j=0;j<N-1;j++){
					if (a[j+1] == a[j] + 1) A=1;
					else if (a[j+1] != a[j] + 1) A=0;
				}
			}
		if ( A==1 ) printf ("YES\n");
		else if (A==0) printf ("NO\n");	
		scanf ("%d",&N);
	}
	return 0;
}


