#include <stdio.h>
#define F 100000
int main() {
	int d[F]= {0};
	d[1]=1;
	for(int i=2; i*i<=F; i++){
		if( d[i]==0 ){	
			for(int j=2; j<=F/i; j++) d[i*j] = 1;
		}
	}
	int N;
	scanf("%d\n",&N);
	for(int k=0;k<N;k++){
		int n;
		scanf("%d",&n);
		int a=0;
		for (int i=2;i<=n;i++){
			int b=0;
			if (d[i]==0){
				for(int j=i;j<=n;j++){
					if (d[j]==0){
						b=b+j;
					}
					if (b==n){
						a++;
						break;
					}
					else if(b>n){
						break;
					}
				}
			}
		}
		printf("%d\n",a);
	}
	return 0;
}

