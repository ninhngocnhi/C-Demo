#include <stdio.h>
#define N 100005
int main() {
	int d[N]= {0};
	int a[N]={0};
	d[1]=1;
	for(int i=2; i*i<=N; i++){
		if( d[i]==0 ){	
			for(int j=2; j<=N/i; j++) d[i*j] = 1;
		}
	}
	for(int i=0;i<u;i++){
		printf("%d ",a[i]);
	}
//	for (int k=0; k < T; k++){
//		scanf("%d %d", &a, &b);
//		dem = 0;
//			for (int i=a; i<=b; i++){
//				if (d[i]==0) dem++;
//			}
//		if (dem==0){
//            printf ("0\n");
//			printf ("-1");
//		}
//		else{
//			printf ("%d\n", dem);
//			for (int i=a; i<=b; i++){
//				if (d[i]==0) printf("%d ",i);
//			}
//		}
//		printf("\n");
//	}
	return 0;
} 
