#include <stdio.h>
#include <math.h>
int main (){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a==c){
			printf("%d %d\n",a,a+1);	
		}
		else{
			printf("%d %d\n",a,c);
		}
	}
	return 0;
}

