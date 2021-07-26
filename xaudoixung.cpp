#include <stdio.h>
#include <string.h>
#define N 100000
int main (){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[N];
		gets(a);
		int len = strlen(a);
		int dem=0;
		for(int i=0;i<len/2;i++){
			if(a[i]!=a[len-i-1]){
				dem++;
			}
			if(dem==2){
				break;
			}
		}
		if(dem==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}


