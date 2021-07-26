#include <stdio.h>
#define N 100000
int main() {
	int d[N]= {0};
	int T;
	scanf ("%d",&T);
	int a,b,dem;
	for (int j=0;j<N;j++){
		for (int i=2; i<N; i++){
			if (d[i]==0){
				d[i]=1;
				for ( int j=2; j<=N/i; j++) d[i*j]=-1;
			}
		}
	}
	for (int k=0;k<T;k++){
		scanf ("%d %d",&a,&b);
		dem=0;
		for (int j=0;j<=N;j++){
			for (int i=a;i<=b;i++){
				if (d[i]==1) dem++;
			}
		}
		if (dem==0){
			printf ("0\n");
			printf ("-1\n");
		}
		else if (dem!=0){
			printf ("%d\n",dem);
			for (int i=a;i<=b;i++){
			if (d[i]==1) printf("%d ",i);
			}
		}
	}
	
	return 0;
}


