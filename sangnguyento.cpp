#include <stdio.h>
#define N 100000
int main() {
	int d[N]= {0};
	for (int j=0;j<N;j++){
		for (int i=2; i<N; i++){
			if (d[i]==0){
				d[i]=1;
				for ( int j=2; j<=N/i; j++) d[i*j]=-1;
//			for (int j=2*i;j<n,j+=i) d[j]=-1;
			}
		}
	}
	for (int i=0;i<N;i++){
		if (d[i]==1) printf ("%d ",i);
	}
	return 0;
}

